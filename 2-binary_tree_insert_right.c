/**
 * binary_tree_insert_right - inserts a node as the left-child of a parent node
 *
 * @parent: pointer to the parent node to insert the left-child in
 * @value: value to store in the left node
 *
 * Return: the pointer to the new node, otherwise NULL
 */
#include "binary_trees.h"
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || node == NULL)
		return (NULL);

	/* create new node */
	node->parent = parent;
	node->n = value;
	node->left = NULL;
	node->right = NULL;

	/* check if right-child of parent exists */
	if (parent->right)
	{
		/* copy right-child of parent into right-child of new node */
		node->right = parent->right;
		/* change the parent of the right-child from parent to node */
		parent->right->parent = node;
	}

	/* make node the right child of the parent */
	parent->right = node;

	return (node);
}
