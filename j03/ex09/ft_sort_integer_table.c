/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:25:08 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/10 15:51:51 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_integer_table(int *tab, int size)
{
	int		i;
	int		x;

	i = 0;
	while (i < size - 1)
	{
		if (tab[i] < tab[i + 1])
			i++;
		if (tab[i] > tab[i + 1])
		{
			x = tab[i];
			tab[i] = tab[i + 1];
			tab[i + 1] = x;
		}
	}
}
