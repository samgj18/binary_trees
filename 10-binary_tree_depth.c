#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of
 * a node in a binary tree
 * @tree: pointer to node
 *
 * Return: 0 if the tree is null, otherwise
 * return the depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	if (tree && tree->parent)
	{
		depth = binary_tree_depth(tree->parent);
		return (depth + 1);
	}

	return (0);
}
