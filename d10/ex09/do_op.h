/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:40:33 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/19 11:19:21 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>
# include <stdio.h>

typedef	int		(*t_f_opp)(int, int);

typedef struct	s_opp
{
	char	*operator;
	t_f_opp	funct;
}				t_opp;

int				ft_atoi(char *str);
int				ft_strlen(char *str);

void			ft_putnbr(int nb);
void			ft_putchar_fd(char c, int fd);
void			ft_putstr_fd(char *str, int fd);

int				ft_add(int n1, int n2);
int				ft_sub(int n1, int n2);
int				ft_mul(int n1, int n2);
int				ft_div(int n1, int n2);
int				ft_mod(int n1, int n2);
int				ft_usage(int n1, int n2);
int				by_zero(int nb);

#endif
