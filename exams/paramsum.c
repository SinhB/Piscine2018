#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + 48);
}

int main (int ac, char **av)
{
	if (ac && av)
		ft_putnbr(ac -1);
	ft_putchar('\n');
	return (0);
}
