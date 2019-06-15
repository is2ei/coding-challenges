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

       /**
        * Recursive
        * O(n)
        */
//        if (root == nullptr) {
//            return -1;
//        }
//
//        return std::max(height(root->left), height(root->right)) + 1;

        /**
         * Iterative
         * O(n)
         */
        int max_height = 0;
        int height = -1;
        stack<Node*> st;
        st.push(root);
        while (!st.empty()) {
            Node* n = st.top();
            st.pop();
            height++;

            if (n->left == nullptr && n->right == nullptr) {
                if (max_height < height) {
                    max_height = height;
                    height = 0;
                }
                continue;
            }

            if (n->left != nullptr) {
                st.push(n->left);
            }
            if (n->right != nullptr) {
                st.push(n->right);
            }
        }

        return max_height;
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}
