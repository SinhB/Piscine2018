/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fill.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pthan <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/20 16:12:17 by pthan             #+#    #+#             */
/*   Updated: 2018/08/22 22:42:20 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	if (b <= a && b <= c)
		return (b);
	else
		return (c);
}

void	new_best(t_best *best, int a, int i)
{
	if (a > best->size)
	{
		best->size = a;
		best->best = i;
	}
}

void	fill_tab(int *t0, t_typo *t, t_best *best)
{
	int	i;

	i = 0;
	best->best = 0;
	best->size = 0;
	while (i < (t->c * t->l))
	{
		if (t0[i] == 0)
			i++;
		else
		{
			if (i > t->c && (i % t->c != 0))
				t0[i] = min(t0[i - 1], t0[i - t->c], t0[i - t->c - 1]) + 1;
			new_best(best, t0[i], i);
			i++;
		}
	}
}

void	fill_str(char *str, t_best *best, t_typo *typo)
{
	int j;
	int k;
	int	i;

	i = best->best - (best->size - 1) * (typo->c + 1);
	i += i / typo->c;
	j = 0;
	while (j < best->size)
	{
		k = 0;
		while (k < best->size)
		{
			str[i] = typo->square;
			i++;
			k++;
		}
		i += (typo->c + 1 - best->size);
		j++;
	}
	free(best);
}
