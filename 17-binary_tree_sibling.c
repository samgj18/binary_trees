#include "binary_trees.h"

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->n > node->parent->n)
		return (node->parent->left);
	else
		return (node->parent->right);
}
