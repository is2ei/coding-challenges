#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
/* Linked list Node */
struct Node
{
    int data;
    struct Node* next;
};
Node *reverse(Node **r)
{
    Node *prev =NULL;
    Node *cur = *r;
    Node *nxt;
    while(cur!=NULL)
    {
        nxt = cur->next;
        cur->next = prev;
        prev = cur;
        cur = nxt;
    }
    *r = prev;
}
/* Function to create a new Node with given data */
struct Node *newNode(int data)
{
    struct Node *new_Node = (struct Node *) malloc(sizeof(struct Node));
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
 struct Node* addTwoLists (struct Node* first, struct Node* second);
/* Function to insert a Node at the beginning of the Doubly Linked List */
void push(struct Node** head_ref, int new_data)
{
    /* allocate Node */
    struct Node* new_Node = newNode(new_data);
    /* link the old list off the new Node */
    new_Node->next = (*head_ref);
    /* move the head to point to the new Node */
    (*head_ref)    = new_Node;
}
void printList(struct  Node *Node)
{
    while (Node != NULL)
    {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
Node* subLinkedList(Node* l1, Node* l2);
/* Driver program to test above function */
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
	     reverse(&first);
	     reverse(&second);
		 res = subLinkedList(first, second);
	    printList(res);
   }
   return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure of linked list Node
struct Node
{
    int data;
    struct Node* next;
}; 
*/
/*You are required to complete this method*/
Node* subLinkedList(Node* l1, Node* l2)
{
    
    Node *head_l1 = l1;
    Node *head_l2 = l2;

    int arr_l1[200] = {0};
    int idx_l1 = 0;
    while (l1 != nullptr) {
        arr_l1[idx_l1] = l1->data;
        idx_l1++;
        l1 = l1->next;
    }

    int arr_l2[200] = {0};
    int idx_l2 = 0;
    while (l2 != nullptr) {
        arr_l2[idx_l2] = l2->data;
        idx_l2++;
        l2 = l2->next;
    }

    idx_l1--;
    idx_l2--;

    if (idx_l1 < idx_l2) {

        int data;
        int tmp = 0;
        if (arr_l2[idx_l2] < arr_l1[idx_l1]) {
            data = (arr_l2[idx_l2] + 10) - arr_l1[idx_l1];
            tmp = 1;
        } else {
            data = arr_l2[idx_l2] - arr_l1[idx_l1];
            tmp = 0;
        }

        idx_l1--;
        idx_l2--;

        struct Node *headNew = (struct Node *) malloc(sizeof(struct Node));
        headNew->data = data;

        Node *n = headNew;
        while (idx_l1 >= 0 && idx_l2 >= 0) {

            arr_l1[idx_l1] += tmp;
        
            if (arr_l2[idx_l2] < arr_l1[idx_l1]) {
                data = (arr_l2[idx_l2] + 10) - arr_l1[idx_l1];
                tmp = 1;
            } else {
                data = arr_l2[idx_l2] - arr_l1[idx_l1];
                tmp = 0;
            }
        
            struct Node *nodeNew = (struct Node *) malloc(sizeof(struct Node));
            nodeNew->data = data;        

            nodeNew->next = n;
            n = nodeNew;

            idx_l1--;
            idx_l2--;
        }

        while (idx_l2 >= 0) {
        
            if (arr_l2[idx_l2] < tmp) {
                data = 9;
            } else {
                data = arr_l2[idx_l2] - tmp;
                tmp = 0;
            }
        
            struct Node *nodeNew = (struct Node *) malloc(sizeof(struct Node));
            nodeNew->data = data;  
        
            nodeNew->next = n;
            n = nodeNew;

            idx_l2--;        
        }

        return n;
    }

    int data;
    int tmp = 0;
    if (arr_l1[idx_l1] < arr_l2[idx_l2]) {
        data = (arr_l1[idx_l1] + 10) - arr_l2[idx_l2];
        tmp = 1;
    } else {
        data = arr_l1[idx_l1] - arr_l2[idx_l2];
        tmp = 0;
    }

    idx_l1--;
    idx_l2--;

    struct Node *headNew = (struct Node *) malloc(sizeof(struct Node));
    headNew->data = data;

    Node *n = headNew;
    while (idx_l1 >= 0 && idx_l2 >= 0) {

        arr_l2[idx_l2] += tmp;
        
        if (arr_l1[idx_l1] < arr_l2[idx_l2]) {
            data = (arr_l1[idx_l1] + 10) - arr_l2[idx_l2];
            tmp = 1;
        } else {
            data = arr_l1[idx_l1] - arr_l2[idx_l2];
            tmp = 0;
        }
        
        struct Node *nodeNew = (struct Node *) malloc(sizeof(struct Node));
        nodeNew->data = data;        

        nodeNew->next = n;
        n = nodeNew;

        idx_l1--;
        idx_l2--;
    }

    while (idx_l1 >= 0) {
        
        if (arr_l1[idx_l1] < tmp) {
            data = 9;
        } else {
            data = arr_l1[idx_l1] - tmp;
            tmp = 0;
        }
        
        struct Node *nodeNew = (struct Node *) malloc(sizeof(struct Node));
        nodeNew->data = data;  
        
        nodeNew->next = n;
        n = nodeNew;

        idx_l1--;        
    }

    return n;
}
