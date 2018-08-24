/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush03.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rboissel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 08:01:58 by rboissel          #+#    #+#             */
/*   Updated: 2018/08/04 10:32:51 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		ft_multi_putchar(char c, int nbr)
{
	while (nbr > 0)
	{
		ft_putchar(c);
		nbr--;
	}
	return (0);
}

void	print_first_last_line(int x, char first, char last)
{
	ft_putchar(first);
	ft_multi_putchar('*', (x - 2));
	if (x > 1)
		ft_putchar(last);
	ft_putchar('\n');
}

int		rush(int x, int y)
{
	if (x == 0 || y == 0)
		return (0);
	while (y > 0)
	{
		print_first_last_line(x, '/', '\\');
		y--;
		while (y > 1)
		{
			ft_putchar('*');
			ft_multi_putchar(' ', (x - 2));
			if (x > 1)
				ft_putchar('*');
			ft_putchar('\n');
			y--;
		}
		while (y > 0)
		{
			print_first_last_line(x, '\\', '/');
			y--;
		}
	}
	return (0);
}
