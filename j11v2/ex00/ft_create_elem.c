/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:36:13 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/24 08:52:21 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_create_elem(void *data)
{
	t_list	*elem;

	elem = malloc(sizeof(elem));
	if (elem == NULL)
		return (0);
	else if (elem)
	{
		elem->next = NULL;
		elem->data = data;
	}
	return (elem);
}
