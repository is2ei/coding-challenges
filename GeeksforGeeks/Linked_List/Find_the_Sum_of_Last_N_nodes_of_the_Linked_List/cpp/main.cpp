#include <bits/stdc++.h>
using namespace std;
struct Node {
	int data;
	struct Node* next;
};
void append(struct Node** headRef, int newData)
{
	struct Node* new_node = (struct Node*) malloc(sizeof(struct Node));
	struct Node *last = *headRef;
	new_node->data = newData;
	new_node->next = NULL;
	if (*headRef == NULL)
	{
	    *headRef = new_node;
	    return;
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new_node;
	return;
}
int sumOfLastN_Nodes(struct Node* head, int n);
// Driver program to test above
int main()
{
    int t;
    cin>>t;
    while(t--){
        struct Node* head = NULL;
        int n,m,tmp;
        cin>>m>>n;
        while(m--){
            cin>>tmp;
            append(&head, tmp);
        }
        cout<<sumOfLastN_Nodes(head, n)<<endl;
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Structure of the node of the linled list is as
struct Node {
	int data;
	struct Node* next;
};*/
// your task is to complete this function 
// function should return sum of last n nodes
int sumOfLastN_Nodes(struct Node* head, int n)
{
    stack<Node*> st;
    while (head != nullptr) {
        st.push(head);
        head = head->next;
    }
    
    int result = 0;
    while (n-- && !st.empty()) {
        result += st.top()->data;
        st.pop();
    }
    
    return result;
}
