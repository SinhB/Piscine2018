/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:24:41 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 22:17:29 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list, void (*f)(void *),
							void *data_ref, int (*cmp)(void *, void *))
{
	t_list *tmp;

	tmp = begin_list;
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			(*f)(tmp->data);
		tmp = tmp->next;
	}
}
