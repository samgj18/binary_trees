/*
 * ===========================================================
 *
 *       Filename:  3-binary_tree_delete.c
 *
 *    Description:  Function that checks if a node is a leaf
 *
 *        Version:  1.0
 *        Created:  20/07/2020 10:32:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * ===========================================================
 */

#include "binary_trees.h"
/**
 * post_order_traversal - delete a tree
 * @root: input root
 */
void post_order_traversal(binary_tree_t *root)
{
	if (!root)
		return;

	if (root)
	{
		post_order_traversal(root->left);
		post_order_traversal(root->right);
		printf("%d\n", root->n);
	}
	free(root);
}
/**
 * binary_tree_delete - delete a tree
 * @tree: input root
 */
void binary_tree_delete(binary_tree_t *tree)
{
	post_order_traversal(tree);
}
