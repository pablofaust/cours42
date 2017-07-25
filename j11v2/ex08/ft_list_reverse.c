/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 17:10:59 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 09:18:33 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_reverse(t_list **begin_list)
{
	t_list		*current;
	t_list		*prev;

	current = *begin_list;
	prev = 0;
	while (*begin_list)
	{
		*begin_list = current->next;
		current->next = prev;
		prev = current;
		current = *begin_list;
	}
	*begin_list = prev;
}
