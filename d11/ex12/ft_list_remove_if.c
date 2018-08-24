/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 17:29:22 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 22:14:14 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list *current;
	t_list *previous;
	t_list *tmp;
	t_list *tmp2;

	tmp2 = *begin_list;
	if ((*cmp)(tmp2->data, data_ref) == 0)
	{
		tmp = tmp2;
		tmp2 = tmp2->next;
		free(tmp);
	}
	current = tmp2->next;
	previous = tmp2;
	while (current != NULL && previous != NULL)
	{
		if ((*cmp)(tmp2->data, data_ref) == 0)
		{
			tmp = current;
			previous->next = current->next;
			free(tmp);
		}
		previous = current;
		current = current->next;
	}
}
