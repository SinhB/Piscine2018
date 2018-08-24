/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/12 12:15:09 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/12 20:34:48 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUDOKU_H
# define SUDOKU_H

# include <stdlib.h>
# include <unistd.h>
# include <stdio.h>

void	ft_putchar_fd(char c, int fd);
int		ft_strlen(char *str);
void	ft_putstr_fd(char *str, int fd);
int		mini_atoi(char c);
int		error(void);

int		checkav(int ac, char **av);
int		cmp_tab(int **tab, int **revtab);
int		double_line(char *tab);
int		double_col(int ac, char **av, int nb);
int		double_carre(char**av, int start);

void	malloc_tab(int **tab);
void	free_tab(int **tab);
void	fill_tab(int ac, char **av, int **tab);
void	fill_revtab(int ac, char **av, int **tab);
void	print_tab(int **tab, int i, int j);

int		backtracking(int **tab, int pos_spe);

#endif
