/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/13 14:23:53 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/13 14:31:31 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

int		ft_atoi(char *str);
void	ft_putchar(char c);
void	ft_putstr(char *str);
int		ft_recursive_factorial(int nb);
int		ft_recursive_power(int nb, int power);
int		ft_sqrt(int nb);
int		ft_str_is_alpha(char *str);
int		ft_str_is_numeric(char *str);
int		ft_strmp(char *s1, char *s2);
int		ft_strlen(char *str);
char	*ft_strrev(char *str);
char	*ft_strstr(char *str, char *to_find);
void	ft_swap(int *a, int *b);

#endif
