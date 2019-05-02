#include<stdio.h>
#include<stdlib.h>
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
struct Node *start = NULL;
void sortList(struct Node *head);
// Function to sort a linked list of 0s, 1s and 2s
void printList(struct Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
/* Drier program to test above function*/
void insert(int n1)
{
    int n,value,i;
    //scanf("%d",&n);
    n=n1;
    struct Node *temp;
    for(i=0;i<n;i++)
    {
        scanf("%d",&value);
        
        if(i==0)
        {
            start=new Node (value);
            temp=start;
            continue;
        }
        else
        {
            temp->next= new Node (value);
            temp=temp->next;
            temp->next=NULL;
        }
    }
}
int main()
{
    
    int n;
    
    int t;
    scanf("%d",&t);
    
    while (t--) {
        scanf("%d",&n);
        
        insert(n);
        sortList(start);
        printList(start);
    }
    
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element  
  Node is defined as 
  struct Node
  {
     int data;
     Node *next;
  }
*/
void sortList(Node *head)
{
    struct Node *n = head;
    
    int count[10] = {0};
    
    while (n != nullptr) {
        count[n->data]++;
        n = n->next;
    }
    
    n = head;
    
    for (int i = 0; i < 3; i++) {
        while (count[i] > 0) {
            n->data = i;
            n = n->next;
            count[i]--;
        }
    }

}
