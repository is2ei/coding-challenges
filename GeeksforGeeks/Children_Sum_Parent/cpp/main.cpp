/*input
2
3
4 1 L 4 3 R 3 3 L
5
10 8 L 10 2 R 8 3 L 8 5 R 2 2 L
*/
#include<bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    
    Node(int x){
        data = x;
        left = right = NULL;
    }
};
void insert(Node *root,int a1,int a2,char lr){
	if(root==NULL){
		return;
	}
	if(root->data==a1){
		switch(lr){
			case 'L':root->left=new Node(a2);
			break;
			case 'R':root->right=new Node(a2);
			break;
		}
	}
	else{
		insert(root->left,a1,a2,lr);
		insert(root->right,a1,a2,lr);
	}
}
void inorder(Node *root){
	if(root==NULL)
		return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
int isSumProperty(Node *node);
int main()
{
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	int t;
	cin>>t;
	while(t-->0)
	{
		int n;
		cin>>n;
		int m=n;
		Node *root1=NULL;
		while(n-->0){
			int a1,a2;
			cin>>a1>>a2;
			char lr;
			scanf(" %c",&lr);
			if(root1==NULL){
				root1=new Node(a1);
				switch(lr){
					case 'L':root1->left=new Node(a2);
					break;
					case 'R':root1->right=new Node(a2);
					break;
				}
			}
			else{
				insert(root1,a1,a2,lr);
			}
		}
			cout<<isSumProperty(root1)<<"\n";
	}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function below
Node is as follows:
struct Node{
	int data;
	Node *left,*right;
};
*/

int _isSumProperty(Node* node) {
    
    if (node == nullptr) {
        return 0;
    }
    
    if (node->left == nullptr && node->right == nullptr) {
        return node->data;
    }
    
    int left = _isSumProperty(node->left);
    int right = _isSumProperty(node->right);
    
    if (left == INT_MIN || right == INT_MIN) {
        return INT_MIN;
    }
    
    if (node->data != left + right) {
        return INT_MIN;
    }
    
    return node->data;
}

int isSumProperty(Node *node)
{
    if (node == nullptr) {
        return 1;
    }
    
    if (node->left == nullptr && node->right == nullptr) {
        return 1;
    }
    
    int left = _isSumProperty(node->left);
    int right = _isSumProperty(node->right);
    
    if (left == INT_MIN || right == INT_MIN) {
        return 0;
    }
    
    if (node->data != left + right) {
        return 0;
    }
    
    return 1;
}
