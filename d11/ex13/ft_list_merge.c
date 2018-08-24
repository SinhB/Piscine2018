/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 20:23:44 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 22:04:03 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *tmp;

	if (!*begin_list1)
		*begin_list1 = begin_list2;
	if (begin_list2)
	{
		tmp = *begin_list1;
		while (tmp != NULL)
			tmp = tmp->next;
		tmp->next = begin_list2;
	}
}
