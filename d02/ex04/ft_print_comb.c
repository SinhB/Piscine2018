/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/01 10:44:32 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/01 12:09:49 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_comb(void)
{
	int tab[3];

	tab[0] = '0';
	while (tab[0] <= '7')
	{
		tab[1] = tab[0] + 1;
		while (tab[1] <= '8')
		{
			tab[2] = tab[1] + 1;
			while (tab[2] <= '9')
			{
				ft_putchar(tab[0]);
				ft_putchar(tab[1]);
				ft_putchar(tab[2]);
				if (tab[0] != '7')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				tab[2]++;
			}
			tab[1]++;
		}
		tab[0]++;
	}
}
