/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/11 10:52:30 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 22:28:04 by nrezniko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "sudoku.h"

int	rev_tab(int **revtab, int **tab, int ac, char **av)
{
	malloc_tab(revtab);
	fill_revtab(ac, av, revtab);
	backtracking(revtab, 0);
	if (!(cmp_tab(tab, revtab)))
		return (0);
	return (1);
}

int	main(int ac, char **av)
{
	int **tab;
	int	**revtab;


	if ((ac != 10) || !(checkav(ac, av)) || !(double_carre(av, 0)))
		return (error());
	if (!(tab = (int**)malloc(sizeof(int*) * 9)))
		return (error());
	malloc_tab(tab);
	fill_tab(ac, av, tab);
	if (!(backtracking(tab, 0)))
		return (error());
	else
	{
		if (!(revtab = (int**)malloc(sizeof(int*) * 9)))
			return (error());
		if (!(rev_tab(revtab, tab, ac, av)))
			return (error());
		free_tab(revtab);
	}
	print_tab(tab, 0, 0);
	free_tab(tab);
	return (0);
}
