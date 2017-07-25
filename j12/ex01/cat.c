/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 21:01:56 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 20:43:01 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_cat.h"

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf;
	int		err;
	int 	i;

	argv++;
	if (argc < 2)
		ft_putstr("File name missing.\n");
	while (*argv)
	{
		fd = open(*argv, O_RDONLY);
		ft_putnbr(errno);
		if (errno == 2)
		{
			ft_putstr("cat:");
			ft_putstr(*argv);
			ft_putstr(": No such file or directory\n");
		   	return (0);	
		}
		ret = 1;
		while (ret)
		{
			ret = read(fd, buf, 1);
			ft_putstr(buf);
		}
		argv++;
	}
	return (0);
}

