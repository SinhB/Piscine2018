/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/05 10:02:59 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/23 17:11:13 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int i;

	if (nb == 2 || nb == 3 || nb == 5)
		return (1);
	if (nb % 2 == 0 || nb <= 1)
		return (0);
	i = 2;
	while (i <= (nb / i))
	{
		if ((nb % i) == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	if (nb == 5)
		return (5);
	while (!(ft_is_prime(nb)))
		nb++;
	return (nb);
}
