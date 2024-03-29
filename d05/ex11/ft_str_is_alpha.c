/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 11:38:53 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/07 11:42:38 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while ((*str >= 65 && *str <= 90) || (*str >= 97 && *str <= 122))
		str++;
	if (*str != '\0')
		return (0);
	return (1);
}
