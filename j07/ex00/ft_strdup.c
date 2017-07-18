/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/17 21:08:57 by pfaust            #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2017/07/18 20:24:22 by pfaust           ###   ########.fr       */
=======
/*   Updated: 2017/07/18 18:57:11 by pfaust           ###   ########.fr       */
>>>>>>> 07adbd9450236cc8d1efdb54d4fccd7a677b457c
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str)
{
	int		i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*dup;
	int		i;
	
	if (*src == 0)
		return (0);
	if (!(dup = (char*)malloc(sizeof(*dup) * (ft_strlen(src) + 1))))
		return (NULL);
	i = 0;
	while (i < ft_strlen(src))
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = 0;
	return (dup);
}
