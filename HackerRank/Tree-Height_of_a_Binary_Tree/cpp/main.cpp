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
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    int height(Node* root) {
        // Write your code here.

        vector<Node *> nodes;
        if (root->left != nullptr) {
            nodes.push_back(root->left);
        }
        if (root->right != nullptr) {
            nodes.push_back(root->right);
        }

        vector<int> heights;

        int max_h = 0;
        int h = 0;
        while (nodes.size() > 0) {
            h++;
            Node* n = nodes[nodes.size() - 1];
            nodes.pop_back();

            if (n->left == nullptr && n->right == nullptr) {
                if (max_h < h) {
                    max_h = h;
                    h = 0;
                    continue;
                }
            }

            if (n->left != nullptr) {
                nodes.push_back(n->left);
            }
            if (n->right != nullptr) {
                nodes.push_back(n->right);
            }
        }

        return max_h;
    }

}; //End of Solution
