/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle_2.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:24:35 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/06 12:55:02 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		check_line_col(int tab[8][8], int pos_spe, int i, int j)
{
	while (i < 7)
	{
		if (tab[pos_spe / 8][i] != 0)
			return (0);
		i++;
	}
	while (j < 7)
	{
		if (tab[j][pos_spe % 8] != 0)
			return (0);
		j++;
	}
	return (1);
}

int		check_diag(int tab[8][8], int pos_spe, int i)
{
	int x;
	int y;

	x = pos_spe % 8;
	y = pos_spe / 8;
	while (((y + ++i) <= 7) && ((x + i) <= 7))
		if (tab[y + i][x + i] != 0)
			return (0);
	i = -1;
	while (((y - ++i) >= 0) && ((x - i) >= 0))
		if (tab[y - i][x - i] != 0)
			return (0);
	i = -1;
	while (((y + ++i) <= 7) && ((x - i) >= 0))
		if (tab[y + i][x - i] != 0)
			return (0);
	i = -1;
	while (((y - ++i) >= 0) && ((x + i) <= 7))
		if (tab[y - i][x + i] != 0)
			return (0);
	return (1);
}

int		backtracking(int tab[8][8], int pos_spe, int queens)
{
	static int cnt;

	if (queens == 0)
	{
		pos_spe -= 1;
		cnt += 1;
	}
	while (pos_spe != 64)
	{
		if (check_line_col(tab, pos_spe, 0, 0) && check_diag(tab, pos_spe, -1))
		{
			tab[pos_spe / 8][pos_spe % 8] = (pos_spe % 8) + 1;
			backtracking(tab, pos_spe + 1, queens - 1);
			tab[pos_spe / 8][pos_spe % 8] = 0;
		}
		pos_spe++;
	}
	return (cnt);
}

int		ft_eight_queens_puzzle(void)
{
	int tab[8][8];
	int i;
	int j;

	i = 0;
	while (i <= 7)
	{
		j = 0;
		while (j <= 7)
		{
			tab[i][j] = 0;
			j++;
		}
		i++;
	}
	return (backtracking(tab, 0, 8));
}
