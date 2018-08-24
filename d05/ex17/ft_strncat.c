/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:12:52 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/07 13:24:15 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, int nb)
{
	int i;
	int start;

	i = 0;
	while (dest[i])
		i++;
	start = i;
	i = 0;
	while (i < nb && src[i])
	{
		dest[start + i] = src[i];
		i++;
	}
	dest[start + i] = '\0';
	return (dest);
}
