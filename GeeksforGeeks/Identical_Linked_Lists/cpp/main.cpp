#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include<bits/stdc++.h>
using namespace std;
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
bool areIdentical(struct Node *a, struct Node *b);
void push(struct Node** head_ref, int new_data)
{
	struct Node* new_node =new Node(new_data);
	new_node->next = (*head_ref);
	(*head_ref) = new_node;
}
int main()
{
    int T;
    cin>>T;
    while(T--){
        int n1, n2, tmp;
        struct Node *a = NULL;
        struct Node *b = NULL;
        cin>>n1;
        while(n1--){
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>n2;
        while(n2--){
            cin>>tmp;
            push(&b, tmp);
        }
        areIdentical(a, b)?cout<<"Identical"<<endl:cout<<"Not identical"<<endl;
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
Structure of the node of the linked list is as
struct Node
{
	int data;
	struct Node *next;
};
*/
// Complete this function
// return true if two list are identical else return false
bool areIdentical(struct Node *head1, struct Node *head2)
{
    while (head1 != nullptr || head2 != nullptr) {
        if (head1->data != head2->data) {
            return false;
        }
        head1 = head1->next;
        head2 = head2->next;
    }
    
    if (head1 != nullptr || head2 != nullptr) {
        return false;
    }
    
    return true;
}
