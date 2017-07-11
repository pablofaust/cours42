/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 17:49:46 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 19:29:05 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_sqrt(int nb)
{
	int		y;
	int		racine;

	y = 0;
	while (y <= 46340 && y <= nb)
	{
		if (y * y == nb)
			return (y);
		y++;
	}
	return (0);
}

int		main()
{
	int		nb;

	nb = ft_sqrt();
	printf("%d\n", nb);	
	return (0);
}