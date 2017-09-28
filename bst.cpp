#include "bst.h"

using namespace std;

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
    if(!node) {
        node* tmp = new node;
        tmp->val = val;
        tmp->left = NULL;
        tmp->right = NULL;
        return tmp;
    }

    if(leaf->val < val) {
        if (!cur->)
    }
}

void BST::inorder()
{
    this->inorder_helper(this->root);
}

void BST::inorder_helper(node* inputNode)
{
    if (!inputNode) {
        return;
    }

    this->inorder_helper(inputNode->left);
    cout << inputNode->val << endl;
    this->inorder_helper(inputNode->right);
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

