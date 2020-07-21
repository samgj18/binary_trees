#include "binary_trees.h"

/**
 * binary_tree_size - measures the size of the tree
 * @tree: pointer to node
 *
 * Return: the size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int n_left = 0;
	int n_right = 0;

	if (tree)
	{
		n_left = binary_tree_size(tree->left);
		n_right = binary_tree_size(tree->right);

		return (n_left + 1 + n_right);
	}

	return(0);
}
