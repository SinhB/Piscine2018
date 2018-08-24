/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/08 14:31:30 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/08 15:57:44 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_putstr(char *str)
{
	while (*str)
		ft_putchar(*str++);
}

int		ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void	print_param(int ac, char **av, int i)
{
	while (i < ac)
	{
		ft_putstr(av[i]);
		ft_putchar('\n');
		i++;
	}
}

int		main(int ac, char **av)
{
	int		i;
	char	*tmp;

	i = 1;
	if (ac > 1)
	{
		while (i < ac)
		{
			if (av[i + 1] && ft_strcmp(av[i], av[i + 1]) > 0)
			{
				tmp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = tmp;
				i = 1;
			}
			else
				i++;
		}
	}
	print_param(ac, av, 1);
	return (0);
}
