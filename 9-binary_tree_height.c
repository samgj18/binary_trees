/*
 * ============================================================
 *
 *       Filename:  9-binary_tree_height.c
 *
 *    Description:  Function that measures the height of a binary tree
 *
 *        Version:  1.0
 *        Created:  20/07/2020 13:40:02
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * ============================================================
 */
#include "binary_trees.h"

/**
 * post_order_traversal - delete a tree
 * @root: input root
 * @c_left: counter left
 * @c_right: counter right
 * Return: count + 1
 */
size_t post_order_traversal(const binary_tree_t *root,
		size_t c_left, size_t c_right)
{
	if (!root)
		return (0);

	if (root)
	{
		c_left  = post_order_traversal(root->left, c_left, c_right);
		c_left++;
		c_right = post_order_traversal(root->right, c_left, c_right);
		c_right++;
	}
	if (c_right > c_left)
		return (c_right);

	return (c_left);
}

/**
 * binary_tree_height - checks for the height of a node
 * @tree: input tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0, c_left = 0, c_right = 0;

	if (!tree)
		return (0);

	counter = post_order_traversal(tree, c_left, c_right);

	return (counter - 1);
}
