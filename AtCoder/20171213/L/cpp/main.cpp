#include <bits/stdc++.h>

using namespace std;

void f(int a, vector<char> op, vector<int> b) {

    for (int i = 0; i < op.size(); i++) {
        switch (op[i]) {
            case '+':
                a += b[i];
                break;
            case '-':
                a -= b[i];
                break;
            case '*':
                a *= b[i];
                break;
            case '/':
                if (b[i] == 0) {
                    cout << "error\n";
                    return;
                }
                a /= b[i];
                break;
        }
        cout << i + 1 << ":" << a << endl;
    }

}

int main() {

    int n;
    cin >> n;
    
    int a;
    cin >> a;

    vector<char> op;
    vector<int> b;
    for (int i = 0; i < n; i++) {
        char c;
        cin >> c;
        op.push_back(c);

        int num;
        cin >> num;
        b.push_back(num);
    }

    f(a, op, b);

    return 0;
}
