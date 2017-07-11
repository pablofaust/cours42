/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 19:31:56 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 19:53:37 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_is_prime(int nb)
{
	int		i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
	{
		if (nb % i == 0)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

int		main()
{
	int		premier;

	premier = ft_is_prime(123);
	printf("%d\n", premier);
	return (0);
}

