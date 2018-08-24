/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:43:13 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 15:57:02 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *front;

	front = *begin_list;
	if (front == NULL)
		*begin_list = ft_create_elem(data);
	else
	{
		front = ft_create_elem(data);
		front->next = *begin_list;
		*begin_list = front;
	}
}
