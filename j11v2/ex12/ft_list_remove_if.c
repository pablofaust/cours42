/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/24 16:12:54 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/24 17:27:26 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*before;
	t_list	*tmp;
	t_list	*current;

	if (!(begin_list))
		return ;
	current = *begin_list;
	while (current)
	{
		if ((*cmp)(current->data, data_ref) == 0)
		{
			if (current == *begin_list)
				*begin_list = (*begin_list)->next;
			else
				before->next = current->next;
			tmp = current;
			current = current->next;
			free(tmp);
		}
		else
		{
			before = current;
			current = current->next;
		}
	}
}
