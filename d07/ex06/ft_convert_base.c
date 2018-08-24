/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 10:13:33 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 18:50:08 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_is_base(char c, char *base)
{
	int i;

	i = 0;
	while (base[i])
	{
		if (c == base[i])
			return (i);
		i++;
	}
	return (ft_strlen(base));
}

int		nbr_len(int nb, char *base_to, int len)
{
	if (nb < 0)
	{
		nb = -nb;
		len++;
	}
	if (nb > ft_strlen(base_to) - 1)
		return (nbr_len(nb / ft_strlen(base_to), base_to, len + 1));
	else
		return (len + 1);
}

int		ft_atoi_base(char *str, char *base)
{
	int res;
	int neg;
	int i;

	i = 0;
	neg = 1;
	res = 0;
	while (str[i] == 32 || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_is_base(str[i], base) < ft_strlen(base))
	{
		res = res * ft_strlen(base) + ft_is_base(str[i], base);
		i++;
	}
	return (neg * res);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		nb;
	int		len;
	char	*res;
	int		i;

	nb = ft_atoi_base(nbr, base_from);
	len = nbr_len(nb, base_to, 0);
	if (!(res = (char*)malloc(sizeof(char) * (nbr_len(nb, base_to, 0) + 1))))
		return (0);
	i = 0;
	if (nb < 0)
	{
		res[i] = '-';
		nb = -nb;
		i++;
	}
	res[len] = '\0';
	while (len > i)
	{
		res[len - 1] = base_to[nb % ft_strlen(base_to)];
		if (nb / ft_strlen(base_to))
			nb = nb / ft_strlen(base_to);
		len--;
	}
	return (res);
}
