#include <bits/stdc++.h>

using namespace std;

void f(int a, int b, char op) {
    switch (op) {
        case '+':
            cout << a + b << endl;
            break;
        case '-':
            cout << a - b << endl;
            break;
        case '*':
            cout << a * b << endl;
            break;
        case '/':
            if (b == 0) {
                cout << "error" << endl;
            } else {
                cout << a / b << endl;
            }
            break;
        case '?':
        case '=':
        case '!':
            cout << "error" << endl;
            break;
    }
}

int main() {

    int a;
    cin >> a;

    char op;
    cin >> op;

    int b;
    cin >> b;

    f(a, b, op);

    return 0;
}
