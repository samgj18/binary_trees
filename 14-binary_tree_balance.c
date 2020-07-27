#include "binary_trees.h"

/**
 * binary_tree_height - calculates the highest value
 * @tree: pointer
 *
 * Return: the highest node
 */
int binary_tree_height(const binary_tree_t *tree)
{
	size_t right_c = 0, left_c = 0;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	left_c = binary_tree_height(tree->left) + 1;
	right_c = binary_tree_height(tree->right) + 1;

	if (right_c > left_c)
		return (right_c);
	return (left_c);
}

/**
 * binary_tree_balance -  measures the balance factor
 * of a binary tree
 * @tree: pointer to node
 *
 * Return: 0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_c = 0, right_c = 0;

		if (tree == NULL)
			return (0);
		if (tree->left)
			left_c = binary_tree_height(tree->left) + 1;
		if (tree->right)
			right_c = binary_tree_height(tree->right) + 1;

		return (left_c - right_c);
}
