/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 19:04:05 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/01 10:40:30 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_alphabet(void)
{
	int letter;

	letter = 'a';
	while (letter <= 'z')
	{
		ft_putchar(letter);
		letter++;
	}
}
