/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:03:15 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 16:05:49 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *tmp;
	t_list *elem;

	elem = *begin_list;
	while (elem)
	{
		if (elem->next != NULL)
			tmp = elem->next;
		else
			tmp = NULL;
		free(elem);
		elem = tmp;
	}
	*begin_list = NULL;
}
