#include "binary_trees.h"

/**
 * max_val -  calculates the maximum value
 * @a: first value
 * @b: second value
 *
 * Return: the maximun value
 */
int max_val(int a, int b)
{
    return (a >= b) ? a : b; 
}

/**
 * height_tree -  calculates the highest value
 * of the tree
 * @node: pointer
 *
 * Return: the highest node
 */
int height_tree(const binary_tree_t *node)
{
    if (node == NULL)
        return 0;

    return (1 + max_val(height_tree(node->left), height_tree(node->right)));
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
	if (tree == NULL)
		return (0);

	return (height_tree(tree->right) - height_tree(tree->left));
}
