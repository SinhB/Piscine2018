/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 19:25:41 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 22:15:59 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list	*new;

	new = NULL;
	if (!(new = (t_list*)malloc(sizeof(t_list))))
		return (0);
	new->data = data;
	new->next = NULL;
	return (new);
}
