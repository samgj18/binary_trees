/*
 * ====================================================
 *
 *       Filename:  7-binary_tree_inorder.c
 *
 *    Description:  Function that goes through a binary
 *					tree using in-order traversal
 *
 *        Version:  1.0
 *        Created:  20/07/2020 12:19:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * ====================================================
 */
#include "binary_trees.h"
/**
 * binary_tree_inorder - prints tree inorder
 * @tree: input tree
 * @func: input function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	if (tree)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
