//Code by Shubham Joshi
#include <bits/stdc++.h>
using namespace std;
struct Node
{
string data;
Node* next;
};
Node *newNode(string str)
{
    Node *new_node = new Node;
    new_node->data = str;
    new_node->next = NULL;
    return new_node;
}
bool Compute(struct Node* root);
void print(Node *root)
{
Node *temp = root;
while(temp!=NULL)
{
cout<<temp->data<<endl;
temp=temp->next;
}
}
int main() {
	// your code goes here
	int T;
	cin>>T;
	while(T--)
	{
		int K;
		cin>>K;
		struct Node *head = NULL;
                struct Node *temp = head;
		for(int i=0;i<K;i++){
		string str="";
		cin>>str;
			if(head==NULL)
			head=temp=newNode(str);
			else
			{
				temp->next = newNode(str);
				temp=temp->next;
			}
		}
		if(Compute(head))
			cout<<"True"<<endl;
		else 
			cout<<"False"<<endl;
	}
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
The structure of linked list is the following
struct Node
{
String data;
Node* next;
};
*/
bool Compute(Node* root)
{
    string s = "";
    while (root != nullptr) {
        s.append(root->data);
        root = root->next;
    }
    
    string r = s;
    reverse(r.begin(), r.end());
    
    return s.compare(r) == 0;
}
