/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:55:53 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 13:18:50 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	t_list		*curseur;

	if (begin_list == 0)
		return (0);
	curseur = begin_list;
	while (curseur->next)
	{
		if (!(*cmp)(curseur->data, data_ref))
			return (curseur);
		else
			curseur = curseur->next;
	}
	return (0);
}
