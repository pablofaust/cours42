/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:31:03 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:06:22 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list	*curseur;

	if (begin_list == 0)
		return ;
	curseur = begin_list;
	while (curseur->next)
	{
		(*f)(curseur->data);
		curseur = curseur->next;
	}
}
