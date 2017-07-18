/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:11:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 10:11:23 by pfaust           ###   ########.fr       */
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

	min = -10;
	max = 10;
	range = ft_range(min, max);
	return (0);
}
