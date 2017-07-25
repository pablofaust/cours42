/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 11:36:13 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/25 14:04:49 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list		*ft_list_push_params(int ac, char **av)
{
	t_list		*argument;
	t_list		*begin_list;

	(void)ac;
	begin_list = NULL;
	av++;
	while (*av)
	{
		argument = ft_create_elem(*av);
		argument->next = begin_list;
		begin_list = argument;
		av++;
	}
	return (begin_list);
}
