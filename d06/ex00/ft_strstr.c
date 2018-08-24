/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 15:45:30 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/07 11:12:46 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strlen(char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

int		ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (n && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
		n--;
	}
	return (n ? *s1 - *s2 : 0);
}

char	*ft_strstr(char *str, char *to_find)
{
	int len;

	len = ft_strlen(to_find, 0);
	while (*str)
	{
		if (ft_strncmp(str, to_find, len) == 0)
			return (str);
		str++;
	}
	return (0);
}
