/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 21:01:56 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 10:21:47 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[1];
	int		err;

	if (argc > 2)
		ft_putstr("Too many arguments.\n");
	fd = open(argv[1], O_RDONLY);
	if (fd == - 1)
		err = errno;
	ft_putnbr(err);
	ret = 1;
	/*while (ret)
	{
		ret = read(fd, buf, 1);
		ft_putchar(buf[0]);
	}*/
	return (0);
}

