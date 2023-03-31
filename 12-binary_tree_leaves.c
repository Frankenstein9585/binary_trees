/**
 * binary_tree_leaves - measures the size of a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: the size of the tree, otherwise 0
 */
#include "binary_trees.h"
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	else if(tree->left == NULL && tree->right == NULL)
	{	
		return 1;
		return (1 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}

	else
	{
		return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	}
}
