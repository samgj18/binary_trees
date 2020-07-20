/*
 * =======================================================
 *
 *       Filename:  2-binary_tree_insert_right.c
 *
 *    Description:  Inserts a node as the right-child of another node
 *
 *        Version:  1.0
 *        Created:  19/07/2020 19:57:27
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gómez
 *   Organization:  Holberton
 *
 * =======================================================
 */
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node at the left
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
	{
		return (NULL);
	}

	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->parent = parent;
	new_node->left = new_node->right = NULL;
	new_node->n = value;
	if (!(parent->right))
		parent->right = new_node;

	else
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
		parent->right = new_node;
	}

	return (new_node);
}

