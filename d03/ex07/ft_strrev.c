/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/02 11:11:05 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/03 11:05:07 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrev(char *str)
{
	char	tmp;
	int		cnt;
	int		i;

	i = 0;
	while (str[i])
		i++;
	cnt = i - 1;
	i = 0;
	while (i < cnt)
	{
		tmp = str[cnt];
		str[cnt] = str[i];
		str[i] = tmp;
		cnt--;
		i++;
	}
	return (str);
}
