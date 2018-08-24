/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:03:12 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 22:16:22 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int	ft_list_size(t_list *begin_list)
{
	int		cnt;
	t_list	*tmp;

	cnt = 0;
	tmp = begin_list;
	if (!tmp)
		return (cnt);
	while (tmp != NULL)
	{
		tmp = tmp->next;
		cnt++;
	}
	return (cnt);
}
