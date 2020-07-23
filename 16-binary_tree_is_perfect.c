#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if the tree iis perfect
 * @tree: input tree
 * Return: 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = binary_tree_height(tree);
	size_t size = binary_tree_size(tree);
	size_t nodes = 2, i = 0;


	for (i = 0; i < height; i++)
	{
		nodes *= 2;
	}

	nodes--;
	if (nodes == size)
	{
		return (1);

	}
	return (0);

}

/**
 * post_order_traversal - checks for the height of a node
 * @root: input root
 * @c_left: counter left
 * @c_right: counter right
 * Return: height
 */
size_t post_order_traversal(const binary_tree_t *root,
			    size_t c_left, size_t c_right)
{
	if (!root)
		return (0);

	if (root)
	{
		c_left  = post_order_traversal(root->left, c_left, c_right);
		c_left++;
		c_right = post_order_traversal(root->right, c_left, c_right);
		c_right++;

	}
	if (c_right > c_left)
		return (c_right);

	return (c_left);
}

/**
 * binary_tree_height - checks for the height of a node
 * @tree: input tree
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t counter = 0, c_left = 0, c_right = 0;

	if (!tree)
		return (0);

	counter = post_order_traversal(tree, c_left, c_right);

	return (counter - 1);
}

/**
 * binary_tree_size - checks the size
 * @tree: input tree
 * Return: size
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

	return (0);
}
