#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void printList(struct node *node)
{
    while(node!=NULL){
        cout<<node->data<<' ';
        node = node->next;
    }
    printf("\n");
}
void push(struct node** head_ref, int new_data)
{
    struct node* new_node =	(struct node*) malloc(sizeof(struct node));
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
struct node* findIntersection(struct node* head1, struct node* head2);
int main()
{
    long test;
    cin>>test;
    while(test--)
    {
        struct node* a = NULL;
        struct node* b = NULL;
        int n, m, tmp;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            cin>>tmp;
            push(&a, tmp);
        }
        cin>>m;
        for(int i=0; i<m; i++)
        {
            cin>>tmp;
            push(&b, tmp);
        }
        printList(findIntersection(a, b));
    }
    return 0;
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*
structure of the node is as
struct node
{
	int data;
	struct node* next;
};
*/
struct node* findIntersection(struct node* head1, struct node* head2)
{

    int count[10000] = {0};

    while (head1 != nullptr) {
        count[head1->data]++;
        head1 = head1->next;
    }

    while (head2 != nullptr) {
        count[head2->data]++;
        head2 = head2->next;
    }

    struct node* headNew = (struct node*) malloc(sizeof(struct node));
    headNew->data = -99999;

    struct node* nodeNew = headNew;
    for (int i = 0; i < 10000; i++) {
        if (count[i] == 2) {
            if (nodeNew->data == -99999) {
                nodeNew->data = i;
            } else {
                struct node* tmp = (struct node*) malloc(sizeof(struct node));
                tmp->data = i;
                nodeNew->next = tmp;
                nodeNew = nodeNew->next;
            }
        }
    }

    if (headNew->data == -99999) {
        return nullptr;
    }

    return headNew;
}
