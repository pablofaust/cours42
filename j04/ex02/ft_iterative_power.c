/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 14:34:13 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/12 11:36:24 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_power(int nb, int power)
{
	int		res;

	res = 1;
	if (power < 0)
		return (0);
	if (power >= 0)
	{
		while (power > 0)
		{
			res = res * nb;
			power--;
		}
		return (res);
	}
	return (res);
}
