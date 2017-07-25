/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 16:48:21 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 09:16:53 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list	*free_list;

	while (*begin_list)
	{
		free_list = *begin_list;
		free(*begin_list);
		*begin_list = free_list->next;
	}
	*begin_list = NULL;
}
