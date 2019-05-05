#include<bits/stdc++.h>

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

/*
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

    int memo[1000][1000] = {0};
    void _topView(Node* root, int height, int depth) {

        if (root == nullptr) {
            return;
        }

        memo[height][depth] = root->data;

        _topView(root->left, height - 1, depth + 1);
        _topView(root->right, height + 1, depth + 1);
    }
    void topView(Node * root) {

        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                memo[i][j] = INT_MIN;
            }
        }

        _topView(root, 500, 1);

        for (int i = 0; i < 1000; i++) {
            for (int j = 0; j < 1000; j++) {
                if (memo[i][j] != INT_MIN) {
                    cout << memo[i][j] << " ";
                    break;
                }
            }
        }
    }

}; //End of Solution
