/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/18 17:48:47 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/19 11:16:39 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "do_op.h"

int	by_zero(int nb)
{
	if (nb == 1)
		ft_putstr_fd("Stop : division by zero\n", 1);
	else if (nb == 2)
		ft_putstr_fd("Stop : modulo by zero\n", 1);
	return (0);
}
