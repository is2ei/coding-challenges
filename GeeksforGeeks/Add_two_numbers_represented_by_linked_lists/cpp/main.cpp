#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
struct Node* addTwoLists (struct Node* first, struct Node* second);
void push(struct Node** head_ref, int new_data)
{
    struct Node* new_Node = new Node(new_data);
    new_Node->next = (*head_ref);
    (*head_ref)    = new_Node;
}
void printList(struct Node *Node)
{
    while(Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
void freeList(struct Node *Node)
{
	struct Node* temp;
    while(Node != NULL)
    {   
        temp=Node;
        Node = Node->next;
        free(temp);
    } 
}
int main(void)
{
   int t,n,m,i,x;
   cin>>t;
   while(t--)
   {
	   struct Node* res = NULL;
    struct Node* first = NULL;
    struct Node* second = NULL;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
			cin>>x;
			push(&first, x);
	    }
         cin>>m;
	    for(i=0;i<m;i++)
	    {
			cin>>x;
	    push(&second, x);
	    }
		 res = addTwoLists(first, second);
	    printList(res);
if(first)
freeList(first);
if(second)
freeList(second);
//if(res)
//freeList(res);
   }
   return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*struct Node
{
    int data;
   Node* next;
}; */
//write a function returns the resultant linked list
Node*  addTwoLists(Node* first, Node* second){
    
    int data = first->data + second->data;
    struct Node* third = new Node(data % 10);
    
    int tmp = data / 10;   

    first = first->next;
    second = second->next;
    
    struct Node* n = third;
    
    while (first != nullptr && second != nullptr) {

        data = first->data + second->data + tmp;
        tmp = data / 10;

        struct Node* newNode = new Node(data % 10);

        n->next = newNode;
        n = newNode;
        
        first = first->next;
        second = second->next;
    }

    while (first != nullptr) {
        data = first->data + tmp;
        tmp = data / 10;
        
        struct Node* newNode = new Node(data % 10);
        
        n->next = newNode;
        n = newNode;        
        
        first = first->next;
    }

    while (second != nullptr) {
        data = second->data + tmp;
        tmp = data / 10;

        struct Node* newNode = new Node(data % 10);
        
        n->next = newNode;
        n = newNode;  

        second = second->next;
    }

    if (tmp > 0) {
        struct Node* newNode = new Node(tmp % 10);
        n->next = newNode;
        n = newNode;
    }

    return third;
}
