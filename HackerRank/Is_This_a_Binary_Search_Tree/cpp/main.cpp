/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

    bool _checkBST(Node* n, int min, int max) {
        if (n == nullptr) {
            return true;
        }
        
        if (n->data < min || n->data > max) {
            return false;
        }

        return _checkBST(n->left, min, n->data - 1) && _checkBST(n->right, n->data + 1, max);
    }

	bool checkBST(Node* root) {
          return _checkBST(root, -99999, 99999);
    }
