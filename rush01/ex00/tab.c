/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 12:28:28 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 12:30:41 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

void	malloc_tab(int **tab)
{
	int i;

	i = 0;
	while (i < 9)
	{
		tab[i] = (int*)malloc(sizeof(int) * 9);
		i++;
	}
}

void	free_tab(int **tab)
{
	int i;

	i = 0;
	while (i < 9)
	{
		free(tab[i]);
		i++;
	}
	free(tab);
}

void	fill_tab(int ac, char **av, int **tab)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tab[i - 1][j] = mini_atoi(av[i][j]);
			j++;
		}
		i++;
	}
}

void	fill_revtab(int ac, char **av, int **tab)
{
	int i;
	int j;

	i = 1;
	while (i < ac)
	{
		j = 0;
		while (av[i][j])
		{
			tab[9 - i][8 - j] = mini_atoi(av[i][j]);
			j++;
		}
		i++;
	}
}

void	print_tab(int **tab, int i, int j)
{
	ft_putstr_fd("\x1b[31m", 1);
	while (i < 9)
	{
		j = 0;
		while (j < 9)
		{
			ft_putchar_fd(tab[i][j] + 48, 1);
			ft_putchar_fd(' ', 1);
			j++;
		}
		ft_putchar_fd('\n', 1);
		i++;
	}
}
