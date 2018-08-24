/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:00:01 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/07 13:12:06 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int i;
	int start;

	i = 0;
	while (dest[i])
		i++;
	start = i;
	i = 0;
	while (src[i])
		dest[start++] = src[i++];
	dest[start] = '\0';
	return (dest);
}
