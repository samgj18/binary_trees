/*
 * ====================================================
 *
 *       Filename:  8-binary_tree_postorder.c
 *
 *    Description:  Function that goes through a binary
 *					tree using in-order traversal
 *
 *        Version:  1.0
 *        Created:  20/07/2020 12:59:25
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
 * binary_tree_postorder - prints tree postorder
 * @tree: input tree
 * @func: input function
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	if (tree)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}

