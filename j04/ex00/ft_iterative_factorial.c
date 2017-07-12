/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 16:36:24 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/12 21:16:46 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int		total;

	total = 1;
	if (nb = 0 || nb >= 12)
		return (total);
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
