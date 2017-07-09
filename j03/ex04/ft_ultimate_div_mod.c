/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/09 09:15:52 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/09 09:25:14 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mode(int *a, int *b)
{
	int		x;
	int		y;

	x = *a / *b;
	y = *a % *b;
	*a = x;
	*b = y;
}
