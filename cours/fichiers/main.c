/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 22:58:24 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/23 10:00:35 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>

#define BUF_SIZE 2
int		main()
{
	int fd;
	int ret;
	char buf[BUF_SIZE + 1];

	while (read(1, buf, BUF_SIZE))
	{
		printf("%s", buf);
	}
	return (0);
}
