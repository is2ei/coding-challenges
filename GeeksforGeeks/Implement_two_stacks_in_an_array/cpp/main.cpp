#include<bits/stdc++.h>
using namespace std;
class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n=100){size = n; arr = new int[n]; top1 = -1; top2 = size;}
 
   void push1(int x);
   void push2(int x);
   int pop1();
   int pop2();
};
int main()
{
    int T;
    cin>>T;
    while(T--)
    {
        twoStacks *sq = new twoStacks();
        int Q;
        cin>>Q;
        while(Q--){
        int stack_no;
        cin>>stack_no;
        int QueryType=0;
        cin>>QueryType;
        
        if(QueryType==1)
        {
            int a;
            cin>>a;
            if(stack_no ==1)
            sq->push1(a);
            else if(stack_no==2)
            sq->push2(a);
        }else if(QueryType==2){
        	if(stack_no==1)
            cout<<sq->pop1()<<" ";
            else if(stack_no==2)
            cout<<sq->pop2()<<" ";
        }
        }
        cout<<endl;
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*The structure of the class is
class twoStacks
{
    int *arr;
    int size;
    int top1, top2;
public:
   twoStacks(int n=100){size = n; arr = new int[n]; top1 = -1; top2 = size;}
 
   void push1(int x);
   void push2(int x);
   int pop1();
   int pop2();
};
*/
/* The method push to push element into the stack 2 */
void twoStacks :: push1(int x)
   {
        arr[top1 + 1] = x;
        top1++;
   }
   
/* The method push to push element into the stack 2*/
void twoStacks ::push2(int x)
   {
       arr[top2 - 1] = x;
       top2--;
   }
   
/* The method pop to pop element from the stack 1 */
int twoStacks ::pop1()
   {
        if (top1 == -1) {
            return -1;
        }
        
        int tmp = arr[top1];
        arr[top1] = 0;
        top1--;
        return tmp;
   }
/* The method pop to pop element from the stack 2 */
int twoStacks :: pop2()
   {
       if (top2 == size) {
           return -1;
       }
       
       int tmp = arr[top2];
       arr[top2] = 0;
       top2++;
       return tmp;
   }