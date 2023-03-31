/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: return the height of the tree otherwise NULL
 */
#include "binary_trees.h"

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
	{
		return (0);
	}
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);

}
