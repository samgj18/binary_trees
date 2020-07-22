#include "binary_trees.h"

/**
 * binary_tree_sibling -  finds the sibling of a node
 * @tree: pointer to node
 *
 * Return: 0 if tree is null
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->n > node->parent->n)
		return (node->parent->left);
	else
		return (node->parent->right);
}
