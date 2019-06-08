// C program to detect loop in a linked list
#include<stdio.h>
#include<stdlib.h>
 #include<iostream>
 using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
void push(struct Node** head_ref, int new_data)
{
    
    struct Node* new_Node = new Node(new_data);
    
    new_Node->next = (*head_ref);
    /* move the head to point to the new Node */
    (*head_ref)    = new_Node;
}
int detectloop(struct Node *list);
/* Driver program to test above function*/
int main()
{
	int t,n,c,x,i;
	cin>>t;
	while(t--){
    /* Start with the empty list */
    cin>>n;
    struct Node *head = NULL;
    struct Node* temp;
    struct Node *s;
    cin>>x;
    push(&head,x);
    s=head;
    for(i=1;i<n;i++){
		cin>>x;
    push(&head,x);}
    /* Create a loop for testing */
    cin>>c;
    if(c>0){
    c=c-1;
    temp=head;
    while(c--)
    temp=temp->next;
    s->next=temp;
	}
	int g=detectloop(head);
    if(g)
    cout<<"True\n";
    else
    cout<<"False\n";
	}
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of linked list is the following
struct node
{
int data;
Node* next;
};*/
int detectloop(Node *head)
{
    if (head == nullptr || head->next == nullptr) {
        return 0;
    }

    Node *next = head->next;
    while (head != nullptr && next != nullptr && next->next != nullptr) {
        if (head == next) {
            return 1;
        }

        head = head->next;
        next = next->next->next;
    }

    return 0;   
}
