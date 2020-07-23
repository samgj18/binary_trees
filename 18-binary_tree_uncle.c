#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node
 * @node: pointer to node
 *
 * Return: 0 if tree is null
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (0);
	if (node->parent->n > node->parent->parent->n)
		return (node->parent->parent->left);
	else
		return (node->parent->parent->right);
}