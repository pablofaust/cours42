/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_integer_table.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/10 12:25:08 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/13 16:22:45 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_condition_swap(int ptr1, int ptr2)
{
	if (ptr1 > ptr2)
		return (1);
	return (0);
}

void	ft_sort_integer_table(int *tab, int size)
{
	int		cache;
	int		swap;
	int		i;

	swap = 1;
	while (swap)
	{
		i = 0;
		swap = 0;
		while (i < size - 1)
		{
			swap = ft_condition_swap(tab[i], tab[i + 1]);
			if (swap == 1)
			{
				cache = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = cache;
			}
			i++;
		}
	}
}
