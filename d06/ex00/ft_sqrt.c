/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/04 18:05:53 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/04 18:36:41 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int i;
	int res;

	i = 1;
	res = 1;
	if (nb == 0 || nb == 1)
		return (nb);
	while (res < nb)
	{
		i++;
		res = i * i;
	}
	if (res != nb)
		return (0);
	return (i);
}
