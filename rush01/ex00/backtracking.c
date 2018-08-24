/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:55:40 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 12:59:28 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int		check_line(int **tab, int i, int nb)
{
	int j;

	j = 0;
	while (j < 9)
	{
		if (tab[i][j] == nb)
			return (0);
		j++;
	}
	return (1);
}

int		check_col(int **tab, int j, int nb)
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (tab[i][j] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		check_carre(int **tab, int i, int j, int nb)
{
	int x;
	int y;

	x = 3 * (i / 3);
	y = 3 * (j / 3);
	i = x;
	while (i < (x + 3))
	{
		j = y;
		while (j < (y + 3))
		{
			if (tab[i][j] == nb)
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int		backtracking(int **tab, int pos_spe)
{
	int i;
	int j;
	int nb;

	i = pos_spe / 9;
	j = pos_spe % 9;
	nb = 1;
	if (pos_spe == 81)
		return (1);
	if (tab[i][j] != 0)
		return (backtracking(tab, pos_spe + 1));
	while (nb <= 9)
	{
		if (check_line(tab, i, nb) && check_col(tab, j, nb) &&
			check_carre(tab, i, j, nb))
		{
			tab[i][j] = nb;
			if (backtracking(tab, pos_spe + 1))
				return (1);
		}
		nb++;
	}
	tab[i][j] = 0;
	return (0);
}
