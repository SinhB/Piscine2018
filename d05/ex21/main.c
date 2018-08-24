/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/15 12:12:04 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/15 18:10:48 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "ft_putnbr_base.c"
#include "ft_atoi_base.c"
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int ac, char **av)
{
	if (ac)
	{
		printf("%d\n", ft_atoi_base(av[1], av[2]));
//		ft_putnbr_base(atoi(av[1]), av[2]);
	}
	return (0);
}
