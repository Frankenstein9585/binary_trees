/**
 * binary_tree_is_leaf - checks that a given node is a leaf
 *
 * @node: pointer to the node to be checked
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
#include "binary_trees.h"
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node->left || node->right)
		return (0);

	return (1);
}
