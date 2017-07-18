/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/18 09:11:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/18 11:08:21 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>
#include	<unistd.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main()
{
	int				min;
	int				max;
	int			**range;
	unsigned int	len;

	min = -10;
	max = 10;
	len = ft_ultimate_range(range, min, max);
	printf("%d\n", len);
	return (0);
}
