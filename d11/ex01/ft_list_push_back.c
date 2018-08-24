/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 10:28:13 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 15:55:56 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *back;

	back = *begin_list;
	if (back == NULL)
		*begin_list = ft_create_elem(data);
	while (back->next != NULL)
		back = back->next;
	back->next = ft_create_elem(data);
}
