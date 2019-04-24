#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 

    int q;
    cin >> q;

    queue<int> qe;
    for (int i = 0; i < q; i++) {
        int op;
        cin >> op;

        if (op == 1) {
            int val;
            cin >> val;
            qe.push(val);
        } else if (op == 2) {
            qe.pop();
        } else if (op == 3) {
            cout << qe.front() << endl;
        }
    }

    return 0;
}
