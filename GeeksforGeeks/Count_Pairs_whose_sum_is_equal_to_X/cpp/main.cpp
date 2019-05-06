#include <bits/stdc++.h>
using namespace std;
struct Node
{
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
void printList(struct Node* head){
    while(head){
        cout<<head->data<<' ';
        head = head->next;
    }
}
int countPairs(struct Node* head1, struct Node* head2,	int x);
// Driver program to test above
int main()
{
    int T;
    cin>>T;
    while(T--){
        struct Node* head1 = NULL;
	    struct Node* head2 = NULL;
	    int n1, n2, tmp, x;
	    cin>>n1;
	    while(n1--){
	        cin>>tmp;
	        append(&head1, tmp);
	    }
	    cin>>n2;
	    while(n2--){
	        cin>>tmp;
	        append(&head2, tmp);
	    }
	    cin>>x;
	    cout<<countPairs(head1, head2, x)<<'\n';
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the linked list is as
struct Node
{
   int data;
   struct Node* next;
};
*/
// your task is to complete this function 
int countPairs(struct Node* head1, struct Node* head2,	int x)
{
    set<int> s;
    while (head1 != nullptr) {
        s.insert(head1->data);
        head1 = head1->next;
    }
    
    int result = 0;
    while (head2 != nullptr) {
        if (s.find(x - head2->data) != s.end()) {
            result++;
        }
        head2 = head2->next;
    }
    
    return result;
}
