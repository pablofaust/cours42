/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 20:39:31 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

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

int					ft_ultimate_range(int **range, int min, int max)
{
	int				*tab;
	unsigned int	len;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	len = ft_strlen(min, max);
	if ((tab = (int*)malloc(sizeof(*tab) * len)) == NULL)
	{
		range = NULL;
		return (0);
	}
	while (min < max)
	{
		*tab = min;
		min++;
		tab++;
	}
	range = &tab;
	return (len);
}
