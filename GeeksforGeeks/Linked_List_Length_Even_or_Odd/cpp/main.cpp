#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
// Function to check the length of linklist
int isLengthEvenOrOdd(struct Node* head);
	
// Push function
void push(struct Node** head, int info)
{
	struct Node* node = (struct Node*) malloc(sizeof(struct Node));
	node->data = info;
	node->next = (*head);
	(*head) = node;
}
// Driver function
int main(void)
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tmp;
        struct Node* head = NULL;
        cin>>n;
        while(n--){
            cin>>tmp;
            push(&head, tmp);
        }
        if( isLengthEvenOrOdd(head) == 0) cout<<"Even\n";
        else cout<<"Odd\n";
    }
	return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*structure of a node of the linked list is as
struct Node
{
	int data;
	struct Node* next;
};
*/
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
    int length = 0;
    while (head != nullptr) {
        length++;
        head = head->next;
    }
    
    return length % 2 != 0;
}
