/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/14 18:59:21 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 10:06:20 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cmpcharset(char c, char *charset)
{
	int i;

	i = 0;
	while (charset[i])
	{
		if (charset[i] == c)
			return (1);
		i++;
	}
	return (0);
}

int		ft_cnt_words(char *str, char *charset)
{
	int cnt;

	while (*str && ft_cmpcharset(*str, charset))
		str++;
	cnt = *str ? 1 : 0;
	while (*str)
	{
		if (ft_cmpcharset(*str, charset) && str + 1)
		{
			str++;
			cnt++;
		}
		str++;
	}
	return (cnt);
}

char	**ft_fill_tab(char **tab, char *str, char *charset)
{
	int i;
	int j;

	i = 0;
	while (*str)
	{
		if (!(ft_cmpcharset(*str, charset)))
		{
			j = 0;
			while (!ft_cmpcharset(*str, charset) && *str)
			{
				tab[i][j] = *str;
				str++;
				j++;
			}
			tab[i][j] = '\0';
			i++;
		}
		else
			str++;
	}
	return (tab);
}

char	**ft_malloc_tab(char **tab, char *str, int cnt, char *charset)
{
	int i;

	i = 0;
	while (*str)
	{
		if (!(ft_cmpcharset(*str, charset)))
		{
			while (!(ft_cmpcharset(*str, charset)) && *str)
			{
				cnt++;
				str++;
			}
			if (!(tab[i] = (char*)malloc(sizeof(char) * cnt + 1)))
				return (0);
			cnt = 0;
			i++;
		}
		else
			str++;
	}
	if (!(tab[i] = (char*)malloc(sizeof(char) * 1)))
		return (0);
	tab[i] = 0;
	return (tab);
}

char	**ft_split(char *str, char *charset)
{
	char	**new;
	int		cnt;

	cnt = ft_cnt_words(str, charset);
	if (!(new = (char**)malloc(sizeof(char*) * cnt + 1)))
		return (0);
	new = ft_malloc_tab(new, str, 0, charset);
	new = ft_fill_tab(new, str, charset);
	return (new);
}
