/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 12:34:36 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 16:43:21 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int *tab;
	int	i;
	int tmp;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	if (!(tab = (int*)malloc(sizeof(int) * (max - min))))
		return (0);
	*range = tab;
	i = 0;
	tmp = min;
	while (tmp < max)
	{
		tab[i] = tmp;
		i++;
		tmp++;
	}
	return (max - min);
}
