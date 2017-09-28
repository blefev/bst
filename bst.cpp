#include "bst.h"

BST::BST()
{
    root = NULL;
}

void BST::insert(int val)
{
    root = insert_helper(val, root);
}

node* BST::insert_helper(int val, node* leaf)
{
}

node* BST::search(int val)
{
}

