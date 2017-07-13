/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:36:24 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/13 11:22:07 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		total;

	total = 0;
	if (nb < 0 || nb >= 12)
		return (total);
	if (nb == 0)
		return (1);
	else
	{
		total = nb;
		while (nb > 2)
		{
			total = total * (nb - 1);
			nb--;
		}
	}
	return (total);
}
