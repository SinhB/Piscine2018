/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:49:19 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 17:27:27 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list *tmp;

	tmp = begin_list;
	if (!tmp)
		return (NULL);
	while (tmp != NULL)
	{
		if ((*cmp)(tmp->data, data_ref) == 0)
			return (tmp);
		tmp = tmp->next;
	}
	return (tmp);
}
