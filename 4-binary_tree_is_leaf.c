/*
 * =====================================================================================
 *
 *       Filename:  4-binary_tree_is_leaf.c
 *
 *    Description:  Function that checks if a node is a leaf
 *
 *        Version:  1.0
 *        Created:  20/07/2020 11:38:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  SAMUEL GOMEZ JIMENEZ (samgj18), samgomjim.18@gmail.com
 *   Organization:  Holberton
 *
 * =====================================================================================
 */
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is leaf
 * @node: input node
 * Return: 1 for leaf or 0
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{

	if (node && !(node->left) && !(node->right))
		return (1);

	return (0);
}

