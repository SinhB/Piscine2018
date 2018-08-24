/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 11:29:51 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 18:13:23 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

unsigned int	ft_strlen(char *str, int i)
{
	while (str[i])
		i++;
	return (i);
}

unsigned int	check_base(char *base)
{
	int i;
	int j;

	i = 0;
	if (ft_strlen(base, 0) == 1)
		return (0);
	while (base[i])
	{
		j = i;
		while (base[j])
		{
			if ((base[i] == base[j] && i != j) || base[i] == '-' || base [i] == '+')
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int res;

	res = nbr;
	if (!base || !check_base(base))
		return ;
	if (nbr < 0)
	{
		res = -nbr;
		ft_putchar('-');
	}
	if (res > ft_strlen(base, 0) - 1)
		ft_putnbr_base((res / ft_strlen(base, 0)), base);
	ft_putchar(base[res % ft_strlen(base, 0)]);
}
