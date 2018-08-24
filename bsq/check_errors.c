/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_errors.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yabecret <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/08/19 16:37:03 by yabecret          #+#    #+#             */
/*   Updated: 2018/08/22 21:59:57 by yabecret         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		error(void)
{
	ft_putstr_fd("map error\n", 2);
	return (0);
}

char	*stdin_to_file(int fd)
{
	int		tmpfile;
	int		n;
	char	buf[4096];

	tmpfile = open("tmp", O_RDWR | O_TRUNC | O_CREAT, S_IWUSR | S_IRUSR);
	while ((n = read(fd, buf, 4096)))
		write(tmpfile, buf, n);
	close(tmpfile);
	return ("tmp");
}
