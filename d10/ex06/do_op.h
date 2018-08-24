/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:40:33 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/18 15:08:12 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DO_OP_H
# define DO_OP_H

# include <unistd.h>

int			ft_atoi(char *str);

void		ft_putnbr(int nb);

void		ft_putchar_fd(char c, int fd);
void		ft_putstr_fd(char *str, int fd);
int			ft_strlen(char *str);

int			check_op(char *str);
int			do_op(int nb1, char *str, int nb2);

#endif
