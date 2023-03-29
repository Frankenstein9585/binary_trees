#include "binary_trees.h"
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    binary_tree_t *node = malloc(sizeof(binary_tree_t));

    if (parent == NULL || node == NULL)
        return (NULL);

    /* create the new node */
    node->parent = parent;
    node->n = value;
    node->left = NULL;
    node->right = NULL;

    if (parent->left)
    {
        /* copy the left child of the parent node into the left-child of the new node */
        node->left = parent->left;
        /* change the parent of parent->left from parent to the new node */
        parent->left->parent = node;
        /* make the new node the new left-child of the parent node*/
        parent->left = node;
    }
    else
    {
        /* make the new node the left-child of the parent node */
        parent->left = node;
    }

    return (node);
}
