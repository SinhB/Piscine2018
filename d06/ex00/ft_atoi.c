/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 14:27:43 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/03 10:52:28 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_whitespace(char c)
{
	if (c == 32 || (c >= 9 && c <= 13))
		return (1);
	return (0);
}

int	ft_is_digit(char c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	ft_atoi(char *str)
{
	int res;
	int neg;
	int i;

	i = 0;
	neg = 1;
	res = 0;
	while (ft_is_whitespace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (ft_is_digit(str[i]))
	{
		res = res + str[i] - 48;
		if (ft_is_digit(str[i + 1]))
			res *= 10;
		i++;
	}
	return (res * neg);
}
