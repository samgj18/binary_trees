/*
 * =====================================================================================
 *
 *       Filename:  5-binary_tree_is_root.c
 *
 *    Description:  Function that checks if a given node is a root
 *
 *        Version:  1.0
 *        Created:  20/07/2020 11:38:36
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * =====================================================================================
 */
#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if node is root
 * @node: input node
 * Return: returns 1 for root or 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{

	if (node && !(node->parent))
		return (1);

	return (0);
}

