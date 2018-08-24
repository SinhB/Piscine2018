#include <unistd.h>

int	ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

char *ft_strcat(char *s1, char *s2)
{
	int j = ft_strlen(s1);
	int i = 0;

	while (s2[i] != '\0')
	{
		s1[j] = s2[i];
		i++;
		j++;
	}
	s1[j] = '\0';
	return (s1);
}


void	ft_union(char *str)
{
	int i = 0;
	int j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i] != str[j])
			j++;
		if (j == i)
				write(1, &str[i], 1);
		i++;
	}
}

int main(int ac, char **av)
{
	char *str;

	if (ac == 3)
	{
		str = ft_strcat(av[1], av[2]);
		ft_union(str);
	}
	write (1, "\n", 1);
	return (0);
}
