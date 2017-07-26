/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_search_item.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 15:56:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/26 17:24:47 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_search_item(t_btree *root, void *data_ref,
		int (*cmpf)(void *, void *))
{
	if (root)
	{
		btree_search_item(root->left, data_ref, cmpf);
		if (!(*cmpf)(data_ref, root->item))
			return (root);
		btree_search_item(root->right, data_ref, cmpf);
	}
	return (0);
}
