/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/07 13:25:20 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/08 09:37:08 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int i;
	unsigned int j;
	unsigned int res;

	res = ft_strlen(src);
	i = 0;
	while (dest[i] && i < size)
		i++;
	j = 0;
	if (size > 0)
		while (src[j] && i < size - 1)
			dest[i++] = src[j++];
	if (j > 0)
	{
		dest[i] = '\0';
		return (res + i - j);
	}
	return (res + i);
}
