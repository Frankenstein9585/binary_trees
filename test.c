#include <stdlib.h>
#include <unistd.h>
#include <stdio.h>
#include "test.h"


bt_node *create()
{
    int x;
    bt_node *new_node;

    new_node =  (bt_node *) malloc (sizeof(bt_node));
    printf("Enter data (-1 for no node)\n");
    scanf("%d", &x);
    
    if (x == -1)
        return 0;

    new_node->data = x;
    
    printf("Enter left child of %d\n", x);
    new_node->left = create();

    printf("Enter right child of %d\n", x);
    new_node->right = create();

    return new_node;
}

int main()
{
    bt_node *root;
    root = create();
    printf("%d\n", root->left->data);
    printf("%d\n", root->right->data);
    return  0;
}
