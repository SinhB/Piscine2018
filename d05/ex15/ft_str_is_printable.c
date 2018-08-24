/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 12:56:39 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/07 12:59:09 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str >= 32 && *str <= 126)
		str++;
	if (*str != '\0')
		return (0);
	return (1);
}
