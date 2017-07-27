/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pfaust <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/26 10:19:38 by pfaust            #+#    #+#             */
/*   Updated: 2017/07/27 10:25:45 by pfaust           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"
#include <unistd.h>
#include <stdio.h>

t_btree *btree_create_node(void *item)
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
void	print_prefix(t_btree *root)
{
	if (root == 0)
		return ;
	printf("%s, ", root->item);
	print_prefix(root->left);
	print_prefix(root->right);
}

void	print_infix(t_btree *root)
{
	if (root == 0)
		return ;
	print_infix(root->left);
	printf("%s, ", root->item);
	print_infix(root->right);
}

void	print_suffix(t_btree *root)
{
	if (root)
	{
		print_suffix(root->left);
		print_suffix(root->right);
		printf("%s, ", root->item);
	}
}


void btree_insert_data(t_btree **root, void *item)
{
	if (*root == 0 || root == 0)
	{
		*root = btree_create_node(item);
		return ;
	}
	if (item < (*root)->item)
		btree_insert_data(&(*root)->left, item);
	else if (item > (*root)->item)
		btree_insert_data(&(*root)->right, item);
}

int btree_level_count(t_btree *root)
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

int		main()
{
	t_btree		*root;
	t_btree		*node;
	
	root = btree_create_node("racine");
	root->left = btree_create_node("9");
	root->right = btree_create_node("2");
	node = root->left;
	node->left = btree_create_node("4");
	node->right = btree_create_node("8");
	node = node->left;
	node->left = btree_create_node("1");
	node->right = btree_create_node("7");
	node = root->left->right;
	node->left = btree_create_node("2");
	node->right = btree_create_node("3");
	node = root->right;
	node->left = btree_create_node("5");
	node->right = btree_create_node("9");
	node = node->left;
	node->left = btree_create_node("8");
	node->right = btree_create_node("4");
	node = root->right->right;
	node->left = btree_create_node("3");
	node->right = btree_create_node("6");
	print_infix(root);
	printf("\n");
	print_prefix(root);
	printf("\n");
	print_suffix(root);
	printf("\n");
	return (0);
}	

/*
				racine
			9			2
		4		8	5		9
	  1	  7	  2  3 	  4   3   6
*/
