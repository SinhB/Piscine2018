/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/09 13:37:57 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 11:23:08 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_newlen(int ac, char **av, int i, int j)
{
	int	cnt;

	cnt = 0;
	while (j < ac)
	{
		i = 0;
		while (av[j][i])
		{
			i++;
			cnt++;
		}
		j++;
	}
	return (cnt);
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*new;
	int		cnt;
	int		i;
	int		j;

	if (!(new = (char*)malloc(sizeof(char) * ft_newlen(argc, argv, 0, 1) + 1)))
		return (0);
	j = 1;
	cnt = 0;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i])
		{
			new[cnt++] = argv[j][i];
			i++;
		}
		if (j != argc - 1)
			new[cnt++] = '\n';
		j++;
	}
	new[cnt] = '\0';
	return (new);
}
