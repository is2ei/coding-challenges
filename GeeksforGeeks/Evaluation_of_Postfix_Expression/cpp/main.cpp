#include <bits/stdc++.h>

using namespace std;

int f2(int a, int b, char op) {

    if (op == '+') {
        return a + b;
    }

    if (op == '-') {
        return a - b;
    }

    if (op == '*') {
        return a * b;
    }

    if (op == '/') {
        return a / b;
    }

    return -1;
}

int f(string s) {

    stack<int> stck;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int b = stck.top();
            stck.pop();
            int a = stck.top();
            stck.pop();
            stck.push(f2(a, b, s[i]));
        } else {
            stck.push((int)s[i] - 48);
        }
    }

    return stck.top();
}

int main() {

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {

        string s;
        getline(cin, s);

        int result = f(s);
        cout << result << endl;

    }

    return 0;
}