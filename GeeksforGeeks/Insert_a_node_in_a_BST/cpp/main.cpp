//Code by 1shubhamjoshi1
#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* right;
    Node* left;
    
    Node(int x){
        data = x;
        right = NULL;
        left = NULL;
    }
};
Node* insert(Node* node, int data);
void inorder(Node *root)
{
    if(root==NULL)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        Node *root;
        Node *tmp;
        root = NULL;
        int N;
        cin>>N;
        for(int i=0;i<N;i++)
        {
            int k;
            cin>>k;
            root = insert(root, k);
        }
        inorder(root);
        cout<<endl;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The structure of a BST node is as follows:
struct Node {
  int data;
  Node * right, * left;
}; */
/* This function should insert a new node with 
   given data and return root of the modified tree  */
Node* insert(Node* node, int data)
{
    Node* nodeNew = new Node(data);
    
    if (node == nullptr) {
        return nodeNew;
    }
    
    Node* n = node;
    while (n != nullptr) {
        if (n->data < nodeNew->data) {
            if (n->right == nullptr) {
                n->right = nodeNew;
                break;
            } else {
                n = n->right;
            }
        } else if (n->data > nodeNew->data) {
            if (n->left == nullptr) {
                n->left = nodeNew;
                break;
            } else {
                n = n->left;
            }
        } else {
            break;
        }
    }
    
    return node;
}
