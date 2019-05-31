#include <stdio.h>
#include <stdlib.h>
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
void append(struct Node** head_ref, struct Node **tail_ref, int new_data)
{
    struct Node* new_node = new Node(new_data);
    
    if (*head_ref == NULL)
       *head_ref = new_node;
    else
       (*tail_ref)->next = new_node;
    *tail_ref = new_node;
}
bool isPalindrome(Node *head);
/* Driver program to test above function*/
int main()
{
  int T,i,n,l;
    cin>>T;
    while(T--){
    struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        for(i=1;i<=n;i++)
        {
            cin>>l;
            append(&head, &tail, l);
        }
   	cout<<isPalindrome(head)<<endl;
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the Node is
struct Node
{
    int data;
    struct Node* next;
};*/
/*You are required to complete this method */
bool isPalindrome(Node *head)
{
    Node* prev = head;
    Node* first = head;
    Node* second = head;
    
    while (second != nullptr && second->next != nullptr) {
        prev = first;
        first = first->next;
        second = second->next->next;
    }

    prev->next = nullptr;
    
    prev = nullptr;
    while (first->next != nullptr) {
        Node* next = first->next;
        first->next = prev;
        prev = first;
        first = next;
    }
    first->next = prev;

    while (head != nullptr && first != nullptr) {
        if (head->data != first->data) {
            return false;
        }
        head = head->next;
        first = first->next;
    }

    return true;
}
