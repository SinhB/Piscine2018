#include <stdlib.h>
#include <unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char **malloc_tab(char *str, char **tab)
{
	int i = 0;
	int j;
	int k = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9 && str[i])
		{
			j = 0;
			while (str[i] != 32 && str[i] != 9 && str[i])
			{
				j++;
				i++;
			}
			if (!(tab[k] = (char*)malloc(sizeof(char) * j + 1)))
				return (0);
			k++;
		}
		else
			i++;
	}
	return (tab);
}

char **fill_tab(char *str, char **tab)
{
	int i = 0;
	int j;
	int k = 0;
	while (str[i])
	{
		if (str[i] != 32 && str[i] != 9 && str[i])
		{
			j = 0;
			while (str[i] != 32 && str[i] != 9 && str[i])
			{
				tab[k][j] = str[i];
				j++;
				i++;
			}
			tab[k][j] = '\0';
			k++;
		}
		else
			i++;
	}
	return (tab);
}

int	cnt_words(char *str)
{
	int cnt;
	while (*str != 32 && *str != 9 && *str)
		str++;
	cnt = str ? 1 : 0;
	while (*str)
	{
		if (*str == 32 || *str == 9)
		{
			cnt++;
			str++;
		}
		else
			str++;
	}
	return (cnt);
}

void	print_rev(char **tab, int cnt)
{
	while (cnt > 0)
	{
		ft_putstr(tab[cnt - 1]);
		if (cnt != 1)
			write(1, " ", 1);
		cnt--;
	}
}

void	free_tab(char **tab, int cnt)
{
	while (cnt > 0)
	{
		free(tab[cnt - 1]);
		cnt--;
	} 
}
int main(int ac, char **av)
{
	char **tab;
	int cnt;
	
	if (ac == 2)
	{
		cnt = cnt_words(av[1]);
		if (!(tab = (char**)malloc(sizeof(char*) * cnt)))
			return (0);
		tab = malloc_tab(av[1], tab);
		tab = fill_tab(av[1], tab);
		print_rev(tab, cnt);
		write(1, "\n", 1);
		free_tab(tab, cnt);
		free(tab);
	}
	else
		write(1, "\n", 1);
	return (0);
}
