#include<iostream>
#include<stack>
using namespace std;
void push(int a);
bool isFull(int n);
bool isEmpty();
int pop();
int getMin();
//This is the STL stack (http://quiz.geeksforgeeks.org/stack-container-adaptors-the-c-standard-template-library-stl/).
stack<int> s;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,a;
		cin>>n;
		while(!isEmpty()){
		    pop();
		}
		while(!isFull(n)){
			cin>>a;
			push(a);
		}
		cout<<getMin()<<endl;
	}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/*Complete the function(s) below*/
void push(int a)
{
    s.push(a);
}
bool isFull(int n)
{
     return s.size() == n;
}
bool isEmpty()
{
    return s.empty();
}
int pop()
{
    int tmp = s.top();
    s.pop();
    return tmp;
}
int getMin()
{
    stack<int> tmp;
    int min = 99999;
    while (!s.empty()) {
        if (min > s.top()) {
            min = s.top();
        }
        tmp.push(s.top());
        s.pop();
    }

    while (!tmp.empty()) {
        s.push(tmp.top());
        tmp.pop();
    }

   return min;
}
