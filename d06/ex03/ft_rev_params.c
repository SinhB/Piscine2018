/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 10:57:29 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/08 14:33:42 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		main(int ac, char **av)
{
	if (ac > 1)
	{
		while (ac > 1)
		{
			ft_putstr(av[ac - 1]);
			ft_putchar('\n');
			ac--;
		}
	}
	return (0);
}
