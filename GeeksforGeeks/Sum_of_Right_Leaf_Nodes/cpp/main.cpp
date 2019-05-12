#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
void inorder(Node *root)
{
    if (root == NULL)return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);    
}
int rightLeafSum(Node* root);
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d", &t);
  while (t--)
  {
     map<int, Node*> m;
     int n;
     scanf("%d",&n);
     struct Node *root = NULL;
     struct Node *child;
     while (n--)
     {
        Node *parent;
        char lr;
        int n1, n2;
        scanf("%d %d %c", &n1, &n2, &lr);
        if (m.find(n1) == m.end())
        {
           parent = newNode(n1);
           m[n1] = parent;
           if (root == NULL)
             root = parent;
        }
        else
           parent = m[n1];
        child = newNode(n2);
        if (lr == 'L')
          parent->left = child;
        else
          parent->right = child;
        m[n2]  = child;
     }
     // inorder(root);
     // cout<<endl;
     cout<<rightLeafSum(root)<<endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the node of the binary tree is as
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
*/

int leftSum(Node* root);
int rightSum(Node* root);

int leftSum(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    if (root->left == nullptr && root->right == nullptr) {
        return 0;
    }
    
    return leftSum(root->left) + rightSum(root->right);
}

int rightSum(Node* root) {
    if (root == nullptr) {
        return 0;
    }
    
    if (root->left == nullptr && root->right == nullptr) {
        return root->data;
    }
    
    return leftSum(root->left) + rightSum(root->right);
}


// function should return the sum of all 
// right leaf nodes
int rightLeafSum(Node* root)
{
    if (root == nullptr) {
        return 0;
    }
    
    return leftSum(root->left) + rightSum(root->right);
}
