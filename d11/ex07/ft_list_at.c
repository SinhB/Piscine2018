/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/23 16:06:46 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 21:18:05 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int	i;
	t_list			*tmp;

	i = 0;
	tmp = begin_list;
	while (i < nbr && (tmp != NULL))
	{
		i++;
		tmp = tmp->next;
	}
	if (!tmp)
		return (NULL);
	else
		return (tmp);
}
