/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_sort.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/25 13:29:58 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:11:43 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_sort(t_list **begin_list, int (*cmp)())
{
	t_list	*curseur;
	t_list	*next;
	void	*x;

	curseur = *begin_list;
	while (curseur->next)
	{
		next = curseur->next;
		while (next)
		{
			if ((cmp(curseur->data, next->data)) > 0)
			{
				x = curseur->data;
				curseur->data = next->data;
				next->data = x;
			}
			next = next->next;
		}
		curseur = curseur->next;
	}
}
