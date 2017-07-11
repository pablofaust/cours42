/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:34:13 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 15:03:39 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
int		ft_iterative_power(int nb, int power)
{
	int		cache;

	cache = nb;
	if (power < 0)
		return (0);
	if (power >= 0)
	{
		while (power >= 2)
		{
			nb = cache * nb;
			power--;
		}
		return (nb);
	}
	return(nb);
}

int		main()
{
	int		nb;

	nb = (ft_iterative_power(2, -12));
	printf("%d\n", nb);
	return (0);
}
