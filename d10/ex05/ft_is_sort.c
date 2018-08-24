/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/17 12:31:27 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/18 18:31:56 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_croissant(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (0);
		i++;
	}
	return (1);
}

int	check_decroissant(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	while (i < length - 1)
	{
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int i;

	i = 0;
	if (length == 0 || length == 1 || length == 2)
		return (1);
	while (i < length)
	{
		if ((*f)(tab[i], tab[i + 1]) > 0)
			return (check_decroissant(tab, length, (*f)));
		if ((*f)(tab[i], tab[i + 1]) < 0)
			return (check_croissant(tab, length, (*f)));
		i++;
	}
	return (1);
}
