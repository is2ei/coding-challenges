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
// A utility function to create a new node
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
// Rearranges given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head);
/* Driver program to test above function*/
int main()
{
    int T,i,n,l;
    cin>>T;
    while(T--)
    {
        struct Node *head = NULL;
        struct Node *temp = head;
        cin>>n;
        for(i=1; i<=n; i++)
        {
            cin>>l;
            if (head == NULL)
            {   head = temp = newNode(l); }
            else
            {  temp->next = newNode(l);
               temp = temp->next;
            }
        }
        head = rearrangeEvenOdd(head);
        while(head != NULL)
        {
            printf("%d ", head->data);
            head = head->next;
        }
        printf("");
    }
    return 0;

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node structure
struct Node
{
    int data;
    struct Node* next;
}; */
// Should rearrange given linked list such that all even
// positioned Nodes are before odd positioned.
// Returns new head of linked List.
Node *rearrangeEvenOdd(Node *head)
{
    if (head == nullptr) {
        return head;
    }

    Node *odd = head;
    Node *even = head->next;
    Node *evenFirst = even;
    while (true) {
        if (odd == nullptr || even == nullptr || even->next == nullptr) {
            odd->next = evenFirst;
            break;
        }
        
        odd->next = even->next;
        odd = odd->next;

        if (odd->next == nullptr) {
            even->next = nullptr;
            odd->next = evenFirst;
            break;
        }
        
        even->next = odd->next;
        even = even->next;
    }
    
    return head;
}