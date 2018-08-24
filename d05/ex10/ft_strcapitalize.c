/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/06 18:54:13 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/08 09:28:19 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_letter(char c)
{
	if ((c >= 65 && c <= 97) || (c >= 97 && c <= 122))
	{
		if (c >= 65 && c <= 90)
			return (2);
		if (c >= 97 && c <= 122)
			return (3);
		return (1);
	}
	return (0);
}

int		ft_is_blank(char c)
{
	if ((ft_is_letter(c) == 0) && !(c >= 48 && c <= 57))
		return (1);
	return (0);
}

char	*ft_strcapitalize(char *str)
{
	int i;

	if (ft_is_letter(str[0]) == 3 && ft_is_letter(str[1]))
		str[0] -= 32;
	i = 1;
	while (str[i])
	{
		if (ft_is_letter(str[i]))
		{
			if (ft_is_letter(str[i]) == 3 && ft_is_blank(str[i - 1]))
				str[i] -= 32;
			else if (ft_is_letter(str[i]) == 2 && !(ft_is_blank(str[i - 1])))
				str[i] += 32;
		}
		i++;
	}
	return (str);
}
