/**
 * binary_tree_is_root - checks that a given node is the root
 *
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is the root, otherwise 0
 */
#include "binary_trees.h"
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent)
		return (0);

	return (1);
}
