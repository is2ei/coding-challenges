#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
 
/* Link list node */
struct Node
{
    int data;
    Node* next;
    
    Node(int x){
        data = x;
        next = NULL;
    }
    
};
void push(struct Node** head_ref, int new_data)
{
   
    struct Node* new_node = new Node(new_data);
    
    new_node->next = (*head_ref);
    (*head_ref)    = new_node;
} 
int getCount(struct Node* head);
/* Drier program to test count function*/
int main()
{
    int T,i,n,l;
    
    cin>>T;
    
    while(T--){
    struct Node *head = NULL;
        
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            push(&head,l);
        }
 
    /* Check the count function */
    printf("%d\n",getCount(head));
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Count the number of nodes 
in the linked list
Node is defined as 
struct Node
{
    int data;
    struct Node* next;
};
 
*/
// head : reference to head of linked list
int getCount(struct Node* head){
    
    int count = 0;
    while (head != nullptr) {
        head = head->next;
        count++;
    }
    
    return count;
}
