#include <unistd.h>


int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr(char *str)
{
	write(1, str, ft_strlen(str));
}

int main(int ac, char **av)
{
	if (ac > 1)
		ft_putstr(av[1]);
	write(1, "\n", 1);
	return (0);
}
