#include <bits/stdc++.h>

using namespace std;

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

class Solution {
    public:
  	
  	void preOrder(Node *root) {
		
      	if( root == NULL )
          	return;
      
      	std::cout << root->data << " ";
      	
      	preOrder(root->left);
      	preOrder(root->right);
    }

/*
Node is defined as 

class Node {
    public:
        int data;
        Node *left;
        Node *right;
        Node(int d) {
            data = d;
            left = NULL;
            right = NULL;
        }
};

*/

    Node * insert(Node * root, int data) {

        if (root == nullptr) {
            root = new Node(data);
            return root;
        }

        Node* n = root;
        Node* newNode = new Node(data);
        while (true) {

            if (n->data < data) {
                if (n->right == nullptr) {
                    n->right = newNode;
                    break;
                } else {
                    n = n->right;
                }
            }

            if (n->data > data) {
                if (n->left == nullptr) {
                    n->left = newNode;
                    break;
                } else {
                    n = n->left;
                }
            }
        }

        return root;
    }

};
