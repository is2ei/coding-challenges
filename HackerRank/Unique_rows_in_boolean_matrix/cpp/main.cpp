#include<bits/stdc++.h>
using namespace std;
#define MAX 1000
void printMat(int M[MAX][MAX],int row,int col);
int main()
{
int T;
cin>>T;
while(T--)
{
	int n,m;
	cin>>n>>m;
	int a[MAX][MAX];
	for(int i=0;i<n;i++)
	for(int j=0;j<m;j++)
	cin>>a[i][j];
	printMat(a,n,m);
	cout<<endl;
}
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

class Node {
    public:
        Node(int x) {
            this->data = x;
            this->end = false;
        }
        int data;
        bool end;
        map<int, Node*> children;
};

class Trie {
    public:
        Trie(vector<int> arr) {
            this->insert(arr);
        }
        map<int, Node*> head;

        void insert(vector<int> arr) {
            Node *h;
            if (head.find(arr[0]) != head.end()) {
                h = head[arr[0]];
            } else {
                h = new Node(arr[0]);
            }
            head[arr[0]] = h;
            
            for (int i = 1; i < arr.size(); i++) {
                int data = arr[i];
                if (h->children.find(data) != h->children.end()) {
                    h = h->children[data];
                } else {
                    h->children[data] = new Node(data);
                    h = h->children[data];
                }
            }
            h->end = true;
        };
        bool check(vector<int> arr) {
            if (head.find(arr[0]) == head.end()) {
                return false;
            }
            
            Node *h = head[arr[0]];
            
            for (int i = 1; i < arr.size(); i++) {
                int data = arr[i];
                if (h->children.find(data) == h->children.end()) {
                    return false;
                }
                h = h->children[data];
            }
            
            return true;
        }
};

/*You are required to complete this function*/
void printMat(int M[MAX][MAX],int row,int col)
{
    vector<int> first_row;
    for (int i = 0; i < col; i++) {
        first_row.push_back(M[0][i]);
    }
    for (int i = 0; i < first_row.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << first_row[i];
    }
    cout << " $";

    Trie *t = new Trie(first_row);

    for (int i = 1; i < row; i++) {
        vector<int> _row;
        for (int j = 0; j < col; j++) {
            _row.push_back(M[i][j]);
        }
        if (t->check(_row) == false) {
            for (int j = 0; j < _row.size(); j++) {
                if (j > 0) {
                    cout << " ";
                }
                cout << _row[j];
            }
            cout << " $";
        }
        t->insert(_row);
    }

}
