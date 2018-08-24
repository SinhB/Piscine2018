/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/16 11:17:02 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 16:01:54 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_push_params(int ac, char **av)
{
	t_list	*tmp;
	t_list	*new;
	int		i;

	if (ac < 2)
		return (new = NULL);
	i = 2;
	new = ft_create_elem(av[0]);
	tmp = new;
	while (i < ac)
	{
		new = ft_create_elem(av[i]);
		new->next = tmp;
		tmp = new;
		i++;
	}
	return (new);
}
