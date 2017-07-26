/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_level_count.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 16:09:01 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/26 17:27:41 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

int		btree_level_count(t_btree *root)
{
	int		size_left;
	int		size_right;

	if (root == 0)
		return (0);
	else
	{
		size_left = btree_level_count(root->left);
		size_right = btree_level_count(root->right);
		if (size_left > size_right)
			return (size_left + 1);
		else
			return (size_right + 1);
	}
}
