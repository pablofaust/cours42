/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:58:39 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:02:54 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list, unsigned int nbr)
{
	t_list	*curseur;

	curseur = begin_list;
	while (curseur)
	{
		curseur = curseur->next;
		nbr--;
	}
	return (curseur);
}
