/**
 * binary_tree_height - measures the height of a node in a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: return the height of the tree otherwise NULL
 */
#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_height = binary_tree_height(tree->left);
	size_t right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_heightx - measures the height of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the height of the tree otherwise NULL
 */
size_t binary_tree_heightx(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height2(tree) - 1);
}
