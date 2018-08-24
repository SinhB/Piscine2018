/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 14:41:51 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 20:34:26 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	double_line(char *tab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (i != j && tab[i] == tab[j] && (tab[i] != '.' || tab[j] != '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	double_col(int ac, char **av, int nb)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (j < 9)
		{
			if (i != j && av[i][nb] == av[j][nb] &&
				(av[i][nb] != '.' || av[j][nb] != '.'))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

int	double_carre(char **av, int start)
{
	int x;
	int y;
	int i;
	int j;

	while (start < 81)
	{
		x = 3 * ((start % 9) / 3);
		y = 3 * ((start / 9) / 3);
		i = x;
		while (i < (x + 3))
		{
			j = y;
			while (j < (y + 3))
			{
				if (av[y + 1][x] == av[j + 1][i] && (i != x) && (j != y) &&
					(av[y + 1][x] != '.' || av[j + 1][i] != '.'))
					return (0);
				j++;
			}
			i++;
		}
		start++;
	}
	return (1);
}

int	checkav(int ac, char **av)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		while (av[i])
		{
			j = 0;
			if (!(double_line(av[i])))
				return (0);
			if (!(double_col(ac, av, j)))
				return (0);
			while (av[i][j])
			{
				if (av[i][j] != '.' && !(av[i][j] >= '1' && av[i][j] <= '9'))
					return (0);
				j++;
			}
			if (j != 9)
				return (0);
			i++;
		}
	}
	return (1);
}

int	cmp_tab(int **tab, int **revtab)
{
	int i;
	int j;

	i = 0;
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			if (tab[i][j] != revtab[8 - i][8 - j])
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}
