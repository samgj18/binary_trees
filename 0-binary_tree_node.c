/*
 * ===================================================
 *
 *       Filename:  0-binary_tree_node.c
 *
 *    Description:
 *
 *        Version:  1.0
 *        Created:  19/07/2020 18:46:20
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Juliana Chois - Samuel Gomez
 *   Organization:  Holberton
 *
 * ===================================================
 */
#include "binary_trees.h"
/**
 * binary_tree_node - created a binary tree node
 * @parent: parent node
 * @value: value of the node
 * Return: Null on failure or ptr to new node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value){
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return new_node;
}

