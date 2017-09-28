#ifndef BST_H
#define BST_H

// include this library to use NULL, otherwise use nullptr instead
#include <cstddef>
#include <iostream>

/* Struct which will be the building block of our list */
struct node{
	int val;
	node* left;
    node* right;
};

class BST{
public:
    BST();
    void insert(int);
    void inorder();
    void postorder();
    void preorder();
    node* search(int);

private:
    node* root;
    void inorder_helper(node*);
    void preorder_helper(node*);
    node* insert_helper(int num, node*);
};


#endif
