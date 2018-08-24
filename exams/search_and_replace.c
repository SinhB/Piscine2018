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

char	*search_and_replace(char *str, char *search, char *replace)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] == search[0] && ft_strlen(replace) == 1)
			str[i] = replace[0];
		i++;
	}
	return (str);
}


int main(int ac, char **av)
{
	char *str;

	if (ac == 4)
	{
		if (ft_strlen(av[2]) == 1)
		{
			str = search_and_replace(av[1], av[2], av[3]);
			ft_putstr(str);
		}
	}
	write(1, "\n", 1);
	return (0);
}
