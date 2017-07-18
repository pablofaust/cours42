/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 17:33:05 by pfaust            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/07/18 20:37:24 by pfaust           ###   ########.fr       */
=======
/*   Updated: 2017/07/18 18:57:22 by pfaust           ###   ########.fr       */
>>>>>>> 07adbd9450236cc8d1efdb54d4fccd7a677b457c
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	ft_strlen(int min, int max)
{
	unsigned int	i;

	i = 0;
	while (min < max)
	{
		i++;
		min++;
	}
	return (i);
}

int				*ft_range(int min, int max)
{
	int		*range;

	if (min >= max)
<<<<<<< HEAD
		return (NULL);
	if ((range = (int*)malloc(sizeof(*range) * (ft_strlen(min, max)))) == NULL)
		return NULL;
=======
		return (0);
	if (!(range = (int*)malloc(sizeof(*range) * (ft_strlen(min, max) + 1))))
		return (NULL);
>>>>>>> 07adbd9450236cc8d1efdb54d4fccd7a677b457c
	while (min < max)
	{
		*range = min;
		min++;
		range++;
	}
	return (range);
}
