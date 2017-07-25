/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:07:02 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 13:28:31 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list	*curseur;

	if (begin_list2 == 0)
		return ;
	if (*begin_list1 == 0 || begin_list1 == 0)
	{
		*begin_list1 = begin_list2;
		return ;
	}
	curseur = *begin_list1;
	while (curseur->next)
		curseur = curseur->next;
	curseur->next = begin_list2;
}
