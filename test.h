/**
 * struct node - Binary tree node
 *
 * @n: Integer stored in the node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct node
{
    int data;
    struct node *left;
    struct node *right;
};

typedef struct node bt_node;
