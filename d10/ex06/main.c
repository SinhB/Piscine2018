/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:36:57 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/18 10:51:16 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	main(int ac, char **av)
{
	if (ac != 4)
		return (0);
	else
	{
		if (check_op(av[2]) == 3 && ft_atoi(av[3]) == 0)
		{
			ft_putstr_fd("Stop : division by zero\n", 1);
			return (0);
		}
		else if (check_op(av[2]) == 4 && ft_atoi(av[3]) == 0)
		{
			ft_putstr_fd("Stop : modulo by zero\n", 1);
			return (0);
		}
		else
		{
			ft_putnbr(do_op(ft_atoi(av[1]), av[2], ft_atoi(av[3])));
			ft_putchar_fd('\n', 1);
		}
	}
	return (0);
}
