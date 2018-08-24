/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/07/31 20:02:00 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/01 10:40:58 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(int c);

void	ft_print_reverse_alphabet(void)
{
	int letter;

	letter = 'z';
	while (letter >= 'a')
	{
		ft_putchar(letter);
		letter--;
	}
}
