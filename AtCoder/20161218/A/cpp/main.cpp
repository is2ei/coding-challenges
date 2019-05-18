#include <bits/stdc++.h>

using namespace std;

int f(int a, int b, char op) {

    if (op == '+') {
        return a + b;
    }
    return a - b;
}

int main() {

    int a, b;
    char op;
    cin >> a >> op >> b;

    int result = f(a, b, op);
    cout << result << endl;

    return 0;
}
