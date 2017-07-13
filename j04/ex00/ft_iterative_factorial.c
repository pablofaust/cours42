/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:36:24 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/13 15:55:18 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_iterative_factorial(int nb)
{
	int		facto;

	facto = 1;
	if (nb < 0 || nb > 12)
		return (0);
	while (nb > 0)
	{
		facto = nb * facto;
		nb = nb - 1;
	}
	return (facto);
}

int		main()
{
	printf("%d\n", ft_iterative_factorial(0));
	return (0);
}
