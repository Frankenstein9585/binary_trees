/**
 * binary_tree_nodes - counts the number of nodes with at least one child
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree, otherwise 0
 */
#include "binary_trees.h"
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if (tree->left == NULL && tree->right == NULL)
	{
		return (0);
	}

	else
	{
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	}
}
