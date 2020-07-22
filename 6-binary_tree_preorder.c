/*
 * ==========================================================
 *
 *       Filename:  6-binary_tree_preorder.c
 *
 *    Description:  Function that goes through a binary tree
 *					using pre-order traversal
 *
 *        Version:  1.0
 *        Created:  20/07/2020 12:19:17
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * ==========================================================
 */
#include "binary_trees.h"
/**
 * binary_tree_preorder - prints tree in preorder
 * @tree: input tree
 * @func: input function
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!func || !tree)
		return;

	if (tree)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
