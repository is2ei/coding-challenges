#include <bits/stdc++.h>
using namespace std;
/* A binary tree node has data, pointer to left child
   and a pointer to right child */
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
};
/* Helper function that allocates a new node with the
   given data and NULL left and right pointers. */
struct Node* newNode(int data)
{
  struct Node* node = new Node;
  node->data = data;
  node->left = NULL;
  node->right = NULL;
  return(node);
}
/* Computes the number of nodes in a tree. */
int height(struct Node* node)
{
  if (node==NULL)
    return 0;
  else
    return 1 + max(height(node->left), height(node->right));
}
int maxLevelSum(Node * root);
/* Function to get diameter of a binary tree */
void inorder(Node *root)
{
    if (root == NULL)
       return;
    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);    
}
/* Driver program to test size function*/
int main()
{
  int t;
  scanf("%d\n", &t);
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
     cout << maxLevelSum(root) << endl;
  }
  return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Tree node structure  used in the program
 struct Node
 {
     int data;
     Node* left, *right;
}; */
/*You are required to complete below method */
int maxLevelSum(Node * root)
{
    if (root == nullptr) {
        return 0;
    }
    
    int sum = 0;
    int max_sum = sum;
    queue<Node*> q1;
    queue<Node*> q2;
    q1.push(root);
    while (!q1.empty()) {
        
        Node* node = q1.front();
        q1.pop();
        
        sum += node->data;
        
        if (node->left != nullptr) {
            q2.push(node->left);
        }
        if (node->right != nullptr) {
            q2.push(node->right);
        }
        
        if (q1.empty()) {
            if (max_sum < sum) {
                max_sum = sum;
            }
            sum = 0;
            
            while (!q2.empty()) {
                q1.push(q2.front());
                q2.pop();
            }
        }
    }
    
    return max_sum;
}
