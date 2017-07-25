/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:51:33 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:06:58 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach_if(t_list *begin_list,
				void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list	*curseur;

	if (begin_list == 0)
		return ;
	curseur = begin_list;
	while (curseur->next)
	{
		if (!(*cmp)(curseur->data, data_ref))
			(*f)(curseur->data);
		curseur = curseur->next;
	}
}
