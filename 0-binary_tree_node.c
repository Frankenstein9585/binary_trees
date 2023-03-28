#include "binary_trees.h"
/**
  * binary_tree_node - creates a binary tree node
  * @parent: pointer to the parent node of the node to be created
  * @value: value to put in the new node
  *
  * Return: the pointer to the new node, otherwise NULL
  */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(node));

	if (node == NULL)
		return (NULL);

	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	return (node);
}

