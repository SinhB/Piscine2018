/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:36:57 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/19 11:20:07 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include "ft_opp.h"

int	ft_usage(int n1, int n2)
{
	n1 = 0;
	n2 = 0;
	ft_putstr_fd("error : only [ ", 1);
	while (n2 < 5)
	{
		ft_putstr_fd(g_opptab[n2].operator, 1);
		ft_putchar_fd(' ', 1);
		n2++;
	}
	ft_putstr_fd("] are accepted.\n", 1);
	return (0);
}

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

int	is_opp(char *str)
{
	int i;

	i = 0;
	while (i < 5)
	{
		if (ft_strcmp(str, g_opptab[i].operator) == 0)
			return (i);
		i++;
	}
	return (i);
}

int	main(int ac, char **av)
{
	int i;

	i = 0;
	if (ac != 4)
		return (0);
	i = is_opp(av[2]);
	if (i < 5)
	{
		ft_putnbr(g_opptab[i].funct(ft_atoi(av[1]), ft_atoi(av[3])));
		ft_putchar_fd('\n', 1);
		return (0);
	}
	else if (i == 5)
		g_opptab[i].funct(ft_atoi(av[1]), ft_atoi(av[3]));
	return (0);
}
