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

void BST::inorder()
{

}

void BST::inorder_helper(node* inputNode)
{
    if (inputNode == NULL) {
        return;
    }
}

void BST::postorder()
{

}

void BST::preorder()
{

}

node* BST::search(int val)
{

}

void BST::preorder_helper(node*)
{

}

