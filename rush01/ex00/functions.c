/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 10:53:17 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 22:22:30 by nrezniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

void	ft_putstr_fd(char *str, int fd)
{
	write(fd, str, ft_strlen(str));
}

int		mini_atoi(char c)
{
	if (c > '0' && c <= '9')
		return (c - 48);
	return (0);
}

int		error(void)
{
	ft_putstr_fd("Error\n", 2);
	return (0);
}
