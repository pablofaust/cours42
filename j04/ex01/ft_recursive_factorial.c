/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/11 11:00:06 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/13 11:18:00 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	if (nb > 1)
	{
		if (nb > 0 && nb <= 12)
		{
			nb = (ft_recursive_factorial(nb - 1)) * nb;
			return (nb);
		}
		else
			return (0);
	}
	return (nb);
}
