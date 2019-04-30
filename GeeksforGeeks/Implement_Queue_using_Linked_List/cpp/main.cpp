#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x)
{
    QueueNode *n = new QueueNode(x);
    
    if (rear == nullptr) {
        rear = n;
    } else {
        rear->next = n;
    }

    if (front == nullptr) {
        front = n;
    }
    
    rear = n;
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop()
{
    if (front == nullptr) {
        return -1;
    }

    int tmp = front->data;
    front = front->next;
    return tmp;
}
