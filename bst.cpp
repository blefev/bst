#include "bst.h"

using namespace std;

BST::BST()
{
    root = NULL;
}

void BST::insert(int val)
{
	node *newNode = new node;
	newNode->val = val;

	if (!this->root) {
		this->root = newNode;
		return;
	}

    this->insert_helper(val, this->root, newNode);
}

void BST::insert_helper(int val, node *cur, node *newNode)
{
	if(val < cur->val) {
		if(!cur->left) {
			cur->left = newNode;
			return;
		}
		this->insert_helper(val, cur->left, newNode);
	} else if (val > cur->val) {
		if(!cur->right) {
			cur->right = newNode;
			return;
		}
		this->insert_helper(val, cur->right, newNode);
	}
	return;
}

void BST::inorder()
{
	this->inorder_helper(this->root);
	cout << "END\n";
}

void BST::inorder_helper(node* inputNode)
{
    if (!inputNode) {
        return;
    }

    this->inorder_helper(inputNode->left);
	cout << inputNode->val << " -> ";
    this->inorder_helper(inputNode->right);
}

void BST::postorder()
{
	this->postorder_helper(this->root);
	cout << "END\n";
}

void BST::postorder_helper(node* inputNode)
{
    if (!inputNode) {
        return;
    }

    this->postorder_helper(inputNode->right);
	cout << inputNode->val << " -> ";
    this->postorder_helper(inputNode->left);
}

void BST::preorder()
{
	this->preorder_helper(this->root);
	cout << "END\n";
}

void BST::preorder_helper(node* inputNode)
{
    if (!inputNode) {
        return;
    }

	cout << inputNode->val << " -> ";
    this->preorder_helper(inputNode->right);
    this->preorder_helper(inputNode->left);
}

node* BST::search(int val)
{
	if (this->root == NULL) {
		return NULL;
	}

	return this->search_helper(val, this->root);
}

node* BST::search_helper(int val, node *cur)
{
	if (val == cur->val) {
		return cur;
	} else if (val < cur->val) {
		return this->search_helper(val, cur->left);
	} else if (val > cur->val) {
		return this->search_helper(val, cur->right);
	}
	return NULL;
}
