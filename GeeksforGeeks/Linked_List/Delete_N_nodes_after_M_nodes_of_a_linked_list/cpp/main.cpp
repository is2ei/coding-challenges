#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* A linked list node */
void linkdelete(struct node  *head, int M, int N);
struct node
{
    int data;
    struct node *next;
};
    struct node *start = NULL;
/* Function to print nodes in a given linked list */
void printList(struct node *node)
{
    while (node != NULL)
    {
        printf("%d ", node->data);
        node = node->next;
    }
    printf("");
    
}
void insert(int n1)
{
    int n,value;
    n=n1;
    struct node *temp;
    for(int i=0;i<n;i++)
    {
        cin>>value;
        if(i==0)
        {
            start=(struct node *) malloc( sizeof(struct node) );
            start->data=value;
            start->next=NULL;
            temp=start;
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
int main()
{
    int t,n1;
    cin>>t;
    while (t--) {
    cin>>n1;
        int m,n;
        cin>>m;
        cin>>n;
 insert(n1);
        linkdelete(start,m,n);
    printList(start);
    }
    
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
delete n nodes after m nodes
  The input list will have at least one element  
  Node is defined as 
  struct node
  {
     int data;
     struct node *next;
  }
*/
void linkdelete(struct node  *head, int M, int N)
{
    int count_m = M;
    int count_n = N;
    while (head != nullptr) {
        if (count_m == 1) {
            struct node* nextNode = head->next;
            while (count_n > 0 && nextNode != nullptr) {
                nextNode = nextNode->next;
                count_n--;
            }
            head->next = nextNode;
            count_m = M + 1;
            count_n = N;
        }
        head = head->next;
        count_m--;
    }
    
}