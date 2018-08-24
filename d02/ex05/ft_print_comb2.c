/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 14:25:33 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/01 16:47:01 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_print_comb2(void)
{
	int tab[2];

	tab[0] = 0;
	while (tab[0] <= 98)
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= 99)
		{
			ft_putchar(tab[0] / 10 + 48);
			ft_putchar(tab[0] % 10 + 48);
			ft_putchar(' ');
			ft_putchar(tab[1] / 10 + 48);
			ft_putchar(tab[1] % 10 + 48);
			if (tab[0] != 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
