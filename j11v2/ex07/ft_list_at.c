/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:58:39 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 09:26:12 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	t_list	*curseur;

	if (begin_list == 0)
		return (0);
	curseur = begin_list;
	while (nbr > 0)
	{
		curseur = curseur->next;
		nbr--;
	}
	return (curseur);
}
