/*
 * =======================================================
 *
 *       Filename:  1-binary_tree_insert_left.c
 *
 *    Description:  Inserts a node as the left-child of another node
 *
 *        Version:  1.0
 *        Created:  19/07/2020 19:37:27
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
 * binary_tree_insert_left - inserts a node at the left
 * @parent: input parent node
 * @value: input value
 * Return: new node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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
	if (!(parent->left))
		parent->left = new_node;

	else
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
		parent->left = new_node;
	}

	return (new_node);
}
