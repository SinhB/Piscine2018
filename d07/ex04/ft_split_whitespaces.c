/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 14:18:22 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/14 16:06:10 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_cnt_words(char *str)
{
	int cnt;

	while (*str && (*str == 32 || *str == 9 || *str == '\n'))
		str++;
	cnt = *str ? 1 : 0;
	while (*str)
	{
		if (*str == 32 || *str == 9 || *str == '\n')
		{
			while (*str == 32 || *str == 9 || *str == '\n')
				str++;
			if (*str != '\0')
				cnt++;
		}
		else
			str++;
	}
	return (cnt);
}

char	**ft_fill_tab(char **tab, char *str)
{
	int i;
	int j;

	i = 0;
	while (*str)
	{
		if ((*str != 32 && *str != 9 && *str != '\n'))
		{
			j = 0;
			while ((*str != 32 && *str != 9 && *str != '\n') && *str)
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

char	**ft_malloc_tab(char **tab, char *str, int i, int cnt)
{
	while (*str)
	{
		if ((*str != 32 && *str != 9 && *str != '\n'))
		{
			while ((*str != 32 && *str != 9 && *str != '\n') && *str)
			{
				cnt++;
				str++;
			}
			tab[i] = (char*)malloc(sizeof(char) * cnt + 1);
			cnt = 0;
			i++;
		}
		else
			str++;
	}
	tab[i] = (char*)malloc(sizeof(char) * 1);
	tab[i] = 0;
	return (tab);
}

char	**ft_split_whitespaces(char *str)
{
	char	**new;
	int		cnt;

	cnt = ft_cnt_words(str);
	if (!(new = (char**)malloc(sizeof(char*) * cnt + 1)))
		return (0);
	new = ft_malloc_tab(new, str, 0, 0);
	new = ft_fill_tab(new, str);
	return (new);
}
