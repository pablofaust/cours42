/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:19:21 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/22 11:27:00 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include	"list.h"
#include	<stdlib.h>

t_list	*add_link(t_list *list, char *str)
{
	t_list	*tmp;

	tmp = malloc(sizeof(t_list));
	if (tmp)
	{
		tmp->str = str;
		tmp->next = list;
	}
	return (tmp);
}
