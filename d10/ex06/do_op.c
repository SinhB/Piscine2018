/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 13:48:37 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/18 15:08:48 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"
#include <stdio.h>

int			check_op(char *str)
{
	if (ft_strlen(str) > 1)
		return (0);
	else
	{
		if (str[0] == '-')
			return (1);
		else if (str[0] == '+')
			return (2);
		else if (str[0] == '/')
			return (3);
		else if (str[0] == '%')
			return (4);
		else if (str[0] == '*')
			return (5);
	}
	return (0);
}

int			do_op(int nb1, char *str, int nb2)
{
	if (check_op(str) == 0)
		return (0);
	else if (check_op(str) == 1)
		return (nb1 - nb2);
	else if (check_op(str) == 2)
		return (nb1 + nb2);
	else if (check_op(str) == 3)
		return (nb1 / nb2);
	else if (check_op(str) == 4)
		return (nb1 % nb2);
	else if (check_op(str) == 5)
		return (nb1 * nb2);
	return (0);
}
