/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 10:24:44 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdlib.h>
#include	<stdio.h>
#include	<unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

unsigned int		ft_strlen(int min, int max)
{
	unsigned int		i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int		*ft_range(int min, int max)
{
	int		*range;

	if (min >= max)
		return(0);
	range = (int*)malloc(sizeof(*range) * (ft_strlen(min, max) + 1));
	while (min < max)
	{
		*range = min;
		printf("%d\n", *range);
		min++;
		range++;
	}
	*range = 0;
	return (range);
}
