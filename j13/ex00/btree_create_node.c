/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_create_node.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:08:45 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/26 17:06:17 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

t_btree		*btree_create_node(void *item)
{
	t_btree		*node;

	node = malloc(sizeof(*node));
	if (node == NULL)
		return (0);
	else if (node)
	{
		node->item = item;
		node->left = 0;
		node->right = 0;
	}
	return (node);
}
