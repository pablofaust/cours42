/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:36:24 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 10:56:51 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		total;

	if (nb <= 0 || nb >= 13)
		return (total);
	else
	{	
		total = nb;	
		while (nb > 2)
		{
			total = total * (nb - 1);
		//	printf("%d\n", total);
			nb--;
		}
	}
	return(total);
}

int		main ()
{
	int		nb;

	nb = -1;
	nb = (ft_iterative_factorial(nb));
	printf("%d\n", nb);
	return(0);
}
