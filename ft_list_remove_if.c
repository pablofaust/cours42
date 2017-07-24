/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 18:01:49 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/24 11:56:27 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list  	*temp;
	t_list		*precedent;
	t_list		*cursor;

	if (begin_list == NULL)
		return ;
	cursor = *begin_list;
	while (cursor)
	{
		if (!((*cmp)((*begin_list)->data, data_ref)))
		{
			if (cursor == *begin_list)
				*begin_list = (*begin_list)->next;
			else
				precedent->next = cursor->next;	
			temp = cursor;
			cursor = cursor->next;
			free(temp);
		}
		else
		{
			precedent = cursor;
			cursor = cursor->next;
		}
	}
}
