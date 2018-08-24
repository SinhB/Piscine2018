/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:42:23 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/18 20:16:20 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar_fd('-', 1);
		ft_putchar_fd('2', 1);
		nb = 147483648;
	}
	if (nb < 0)
	{
		ft_putchar_fd('-', 1);
		nb = -nb;
	}
	if (nb / 10)
		ft_putnbr(nb / 10);
	ft_putchar_fd(nb % 10 + 48, 1);
}
