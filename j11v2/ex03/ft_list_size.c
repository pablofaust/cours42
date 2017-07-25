/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:36:13 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:01:02 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

int		ft_list_size(t_list *begin_list)
{
	t_list	*curseur;
	int		nb;

	nb = 0;
	curseur = begin_list;
	while (curseur)
	{
		curseur = curseur->next;
		nb++;
	}
	return (nb);
}
