//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;
struct node
{
  int data;
  struct node*next,*prev;
};
struct node* update(struct node*start,int p);
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,p;
        cin>>n>>p;
        struct node*start=NULL,*cur=NULL,*ptr=NULL;
        for(int i=0;i<n;i++)
        {
            int a;
            cin>>a;
            ptr=new(struct node);
            ptr->data=a;
            ptr->next=NULL;
            ptr->prev=NULL;
            if(start==NULL)
            {
                start=ptr;
                cur=ptr;
            }
            else
            {
                cur->next=ptr;
                ptr->prev=cur;
                cur=ptr;
            }
        }
        struct node*str=update(start,p);
        while(str!=NULL)
        {
            cout<<str->data<<" ";
            str=str->next;
        }
        cout<<endl;  
    }
}
//Position this line where user code will be pasted.

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

//User function Template for C++
struct node*update(struct node*start,int p)
{
    node* head = start;
    node* headOrigin = head;
    while (start->next != nullptr) {
        p--;
        if (p == 0) {
            node* next = start->next;
            start->next = nullptr;
            head = next;
            start = head;
            continue;
        }
        start = start->next;
    }
    start->next = headOrigin;
    
    return head;
}
