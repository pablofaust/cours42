/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:11:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 22:09:53 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int		*ft_range(int min, int max);

int		main()
{
	int		min;
	int		max;
	int		*range;

	min = 0;
	max = 0;
	range = ft_range(min, max);
	/*while (*range)
	{
		printf("%d\n", *range);
		range++;
	}*/
	return (0);
}
