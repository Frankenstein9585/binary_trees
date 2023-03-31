/**
 * binary_tree_size2 - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree, otherwise 0
 */
#include "binary_trees.h"
size_t binary_tree_size2(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (-1);

	size_t left_size = binary_tree_size2(tree->left) + 1;
	size_t right_size = binary_tree_size2(tree->right) + 1;

	return (right_size + left_size);
}

/**
 * binary_tree_size - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree otherwise 0
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size2(tree) + 1);
}
