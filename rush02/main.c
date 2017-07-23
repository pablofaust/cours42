/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/23 09:11:39 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/23 13:38:39 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush.h"

int		main(int argc, char **argv)
{
	char *buf;
	char *buffer;
	char *stock;
	int	ret;
	int i;

	buffer = malloc(sizeof(buffer));
	buffer = NULL;
	stock = malloc(sizeof(buffer));
	stock = NULL;
	while (*buf)
	{
		ret = read(0, buf, 1);
		buffer = malloc(sizeof(buffer) + 1);
		buffer[0] = *buf;
		buffer[1] = 0;
		stock = malloc(sizeof(buffer) + i);
		ft_strcat(stock, buffer);
		free(buffer);
		i++;
	}
}
