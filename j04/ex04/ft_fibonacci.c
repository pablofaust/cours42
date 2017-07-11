/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 16:25:03 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/11 17:48:08 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	<stdio.h>

int		ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index > 1 && index < 3)
		return (1);
	if (index > 2)
	{
		printf("%d\n", index);
		index = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (index);
	}
	return (index);
}

int		main()
{
	int		index;

	index = ft_fibonacci(8);
	printf("%d\n", index);
	return (0);
}
