/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:06:40 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/01 10:41:40 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_numbers(void)
{
	int number;

	number = '0';
	while (number <= '9')
	{
		ft_putchar(number);
		number++;
	}
}
