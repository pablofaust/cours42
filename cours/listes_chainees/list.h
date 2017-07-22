/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/22 10:55:36 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/22 11:25:07 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

typedef struct s_list t_list;

struct s_list 
{
	char	*str;
	t_list	*next;
};

t_list	*add_link(t_list *list, char *str);
void	print_list(t_list *list);

#endif
