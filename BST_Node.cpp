#include "BST_Node.h"

class BST_Node
{
public:
    BST_Node(int value)
    {
        this->value = value;
        left_branch = 0;
        right_branch = 0;
    }
    int value;
    BST_Node* left_branch;
    BST_Node* right_branch;
};