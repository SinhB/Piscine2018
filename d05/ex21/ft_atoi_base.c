/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 13:54:40 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 16:11:37 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_is_base(char c, char *base)
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

unsigned int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base) == 1)
		return (0);
	while (base[i])
	{
		j = i;
		while (base[j])
		{
			if ((base[i] == base[j] && i != j) || base[i] == '-' ||
				base[i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

unsigned int	check_str(char *str, char *base)
{
	int i;
	int j;

	i = 0;
	while (str[i])
	{
		if (ft_is_base(str[i], base) == ft_strlen(base) && str[i] != '-' &&
			str[i] != '+' && (str[i] >= 13 && str[i] <= 9) && str[i] != 32)
			return (0);
		i++;
	}
	return (1);
}

int				ft_atoi_base(char *str, char *base)
{
	int res;
	int neg;
	int i;

	i = 0;
	neg = 1;
	res = 0;
	if (!check_base(base) || !check_str(str, base) || ft_strlen(base) == 0)
		return (0);
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
