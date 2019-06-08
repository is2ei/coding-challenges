//Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<" ";
temp=temp->next;
}
}
Node* removeDuplicates(Node *root);
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		Node *head = NULL;
                Node *temp = head;
		for(int i=0;i<K;i++){
		int data;
		cin>>data;
			if(head==NULL)
			head=temp=new Node(data);
			else
			{
				temp->next = new Node(data);
				temp=temp->next;
			}
		}
		Node *result  = removeDuplicates(head);
		print(result);
		cout<<endl;
	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of linked list is the following
struct Node
{
int data;
Node* next;
};*/
Node *removeDuplicates(Node *root)
{
    Node* n = root;
    while (n != nullptr && n->next != nullptr) {
        if (n->data == n->next->data) {
            n->next = n->next->next;
            continue;
        }
        n = n->next;
    }
    
    return root;
}
