/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 11:30:03 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/22 22:10:32 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <fcntl.h>
# include <sys/types.h>
# include <sys/stat.h>

typedef struct	s_typo
{
	char	empty;
	char	block;
	char	square;
	int		l;
	int		c;
}				t_typo;

typedef struct	s_best
{
	int		size;
	int		best;
}				t_best;

int				ft_strlen(char *str);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);
int				ft_is_digit(char c);
int				ft_atoi(char *str);

int				fill_typo(char *str, t_typo *typo);
int				first_len(char *av);
int				check_first_line(int fd, char *av, t_typo *typo);
int				check_map(char *buf, t_typo *typo, int *map0);
char			*get_map2(int fd, char *av, t_typo *typo);

int				error(void);
char			*stdin_to_file(int fd);

void			fill_str(char *str, t_best *best, t_typo *typo);
void			fill_tab(int *t0, t_typo *typo, t_best *best);

#endif
