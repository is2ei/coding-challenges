#include <bits/stdc++.h>
using namespace std;
struct node
{
    int data;
    struct node* next;
}*head;
void rotate(struct node **head_ref, int k);
  void insert()
{
    int n,i,value;
    struct node *temp;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            head=(struct node *) malloc( sizeof(struct node) );
            head->data=value;
            head->next=NULL;
            temp=head;
            continue;
        }
        else
        {
            temp->next= (struct node *) malloc( sizeof(struct node) );
            temp=temp->next;
            temp->data=value;
            temp->next=NULL;
        }
    }
}
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("\n");
}
/* Drier program to test above function*/
int main(void)
{
    
    int t,k,n,value;
     
     scanf("%d",&t);
     while(t--)
     {
     insert();     // insert function to build linked list
     scanf("%d",&k);
     rotate(&head,k);  // rotate linked list anti-clockwise  by k nodes
     printList(head);  // print linked list after rotation
     }
     return(0);
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Rotate a linked list after node k
  The input list will have at least one element  
  Return pointer to head of rotated linked list 
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void rotate(struct node **head_ref, int k)
{
    while (k > 0) {
        node *head = *head_ref;
        node *second = head->next;
        node *tail = head->next;;
        while (tail != nullptr && tail->next != nullptr) {
            tail = tail->next;
        }

        head->next = nullptr;
        tail->next = head;
        *head_ref = second;
        
        k--;
    }

}
