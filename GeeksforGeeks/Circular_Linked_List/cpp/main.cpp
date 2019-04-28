// C program to find n'th Node in linked list
#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;
/* Link list Node */
struct Node
{
    int data;
    struct Node* next;
};
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node;
    new_node->data  = new_data;
    new_node->next = NULL;
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
/* Function to get the middle of the linked list*/
bool isCircular(struct Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,k;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n>>k;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
        if (k==1 && n >= 1)
              tail->next = head;
    printf("%d", isCircular(head));
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Link list Node 
struct Node {
    int data;
    Node* next;
}; */
/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{

    if (head == nullptr) {
        return false;
    }

    Node *n = head;
    Node *n2 = head->next;

    while (n != nullptr && n2 != nullptr) {
        if (n == n2) {
            return true;
        }

        n = n->next;
        
        if (n2->next == nullptr) {
            return false;
        }
        n2 = n2->next->next;
    }
    
    return false;
}
