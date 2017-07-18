/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 11:04:34 by pfaust           ###   ########.fr       */
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

int		ft_ultimate_range(int **range, int min, int max)
{
	int				*tab;
	unsigned int	len;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = ft_strlen(min, max);
	tab = (int*)malloc(sizeof(*tab) * (len + 1));
	while (min < max)
	{
		*tab = min;
		printf("%d\n", *tab);
		min++;
		tab++;
	}
	*tab = 0;
	range = &tab;
	return (len);
}
