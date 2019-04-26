/* Hidden stub code will pass a root argument to the function below. Complete the function to solve the challenge. Hint: you may want to write one or more helper functions.  

The Node struct is defined as follows:
	struct Node {
		int data;
		Node* left;
		Node* right;
	}
*/

    bool _checkBST(Node* root, int min, int max) {
        
        if (root == nullptr) {
            return true;
        }
        
        if (root->data <= min) {
            return false;
        }
        
        if (root->data >= max) {
            return false;    
        }

        if (_checkBST(root->left, min, root->data) == false) {
            return false;
        }
        
        if (_checkBST(root->right, root->data, max) == false) {
            return false;
        }
        
        return true;
    }

    bool checkBST(Node* root) {
        
        return _checkBST(root, -99999, 99999);
	}
