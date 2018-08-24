/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 19:22:36 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/22 22:50:46 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	bsq(char *av)
{
	t_typo	*typo;
	t_best	*best;
	int		*map0;
	char	*buf;

	if (!(best = (t_best*)malloc(sizeof(t_best))))
		return (error());
	if (!(typo = (t_typo*)malloc(sizeof(t_typo))))
		return (error());
	if (!(check_first_line(0, av, typo)))
		return (0);
	if (!(map0 = (int*)malloc(sizeof(int) * (typo->l * typo->c))))
		return (error());
	buf = get_map2(0, av, typo);
	if (ft_strlen(buf) != ((typo->c + 1) * typo->l))
		return (error());
	if (!(check_map(buf, typo, map0)))
		return (0);
	fill_tab(map0, typo, best);
	fill_str(buf, best, typo);
	write(1, buf, (typo->l * (typo->c + 1)));
	free(buf - first_len(av) - 1);
	free(typo);
	return (0);
}

int	main(int ac, char **av)
{
	int i;

	i = 1;
	if (ac < 2)
	{
		bsq(stdin_to_file(0));
		return (0);
	}
	while (i < ac)
	{
		bsq(av[i]);
		if (i != ac - 1)
			ft_putchar_fd('\n', 1);
		i++;
	}
	return (0);
}
