/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:32:00 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/22 18:07:58 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

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

int		ft_is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int		ft_atoi(char *str)
{
	int res;
	int neg;
	int i;

	i = 0;
	neg = 1;
	res = 0;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		res = res + str[i] - 48;
		if (ft_is_digit(str[i + 1]))
			res *= 10;
		i++;
	}
	return (res * neg);
}
