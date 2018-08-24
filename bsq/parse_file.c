/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_file.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 11:53:02 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/22 22:31:56 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		fill_typo(char *str, t_typo *typo)
{
	int i;

	i = 0;
	if ((typo->l = ft_atoi(str)) == 0)
		return (error());
	while (str[i])
	{
		while (ft_is_digit(str[i]))
			i++;
		if ((ft_strlen(str) - i) != 3)
			return (error());
		typo->empty = str[i];
		i++;
		typo->block = str[i];
		i++;
		typo->square = str[i];
		i++;
		if (str[i] != '\0')
			return (error());
	}
	return (1);
}

int		first_len(char *av)
{
	char	buf[1];
	int		strlen;
	int		i;
	int		fd;

	i = 0;
	if ((fd = open(av, O_RDONLY)) == -1)
		return (error());
	while ((strlen = read(fd, buf, 1)) && buf[0] != '\n')
	{
		if (strlen == -1)
			return (error());
		i++;
	}
	if (close(fd) == -1)
		return (error());
	return (i);
}

int		check_first_line(int fd, char *av, t_typo *typo)
{
	char	buf[1];
	char	*first;
	int		strlen;
	int		i;

	if ((!(first = (char*)malloc(sizeof(char) * first_len(av) + 1))) ||
		((fd = open(av, O_RDONLY)) == -1))
		return (error());
	i = 0;
	while (buf[0] != '\n' && (strlen = read(fd, buf, 1)))
	{
		if (strlen == -1)
			return (error());
		first[i] = buf[0];
		i++;
	}
	first[i - 1] = '\0';
	i = 0;
	while ((strlen = read(fd, buf, 1)) && buf[0] != '\n')
		i++;
	typo->c = i;
	fill_typo(first, typo);
	free(first);
	return ((close(fd) == -1) ? error() : 1);
}

int		check_map(char *buf, t_typo *typo, int *map0)
{
	int		i;
	int		j;
	int		k;

	i = 0;
	j = 0;
	k = 0;
	while (buf[i] != '\0')
	{
		if (buf[i] != '\n' && buf[i] != typo->empty && buf[i] != typo->block)
			return (error());
		if (buf[i] == '\n')
			k++;
		else
		{
			if (buf[i] == (typo->empty))
				map0[j++] = 1;
			else if (buf[i] == (typo->block))
				map0[j++] = 0;
		}
		i++;
	}
	return ((k != typo->l) ? error() : 1);
}

char	*get_map2(int fd, char *av, t_typo *typo)
{
	int		l;
	int		n;
	int		r;
	char	*buf;

	n = first_len(av);
	l = typo->l * (typo->c + 1) + n + 1;
	if (!(buf = (char*)malloc(sizeof(char) * (l + 1))))
		exit(error());
	if ((fd = open(av, O_RDONLY)) == -1)
		exit(error());
	if ((r = read(fd, buf, l)) == -1)
		exit(error());
	if (close(fd) == -1)
		exit(error());
	buf[l] = '\0';
	return (buf + n + 1);
}
