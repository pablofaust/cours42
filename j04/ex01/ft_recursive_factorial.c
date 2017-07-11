/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:00:06 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 14:22:27 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_recursive_factorial(int nb)
{
	if (nb == 0)
		return (0);
	if (nb > 1)
	{
		if (nb == 0)
			return (1);	
		else if (nb > 0 && nb <= 13)
		{
			nb = (ft_recursive_factorial(nb - 1)) * nb;
			return (nb);
		}
		else
			return(0);
	}
	return(nb);
}

int		main()
{
	int		nb;

	nb = (ft_recursive_factorial(0));
	printf("%d\n", nb);
	return(0);
}
