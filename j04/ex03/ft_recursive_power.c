/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 15:04:37 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 16:23:18 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power > 0)
	{
		if (power == 0)
		{
			printf("%s\n", "fin");
			return (1);
		}
		else if (power > 0)
		{
			nb = ft_recursive_power(nb, power -1) * nb;
			printf("%d\n", nb);
			return (nb);
		}
	}
	return(nb);
}

int		main()
{
	int		nb;

	nb = ft_recursive_power(10, -3);
	printf("%d\n", nb);
	return (0);
}
