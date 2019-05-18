#include <bits/stdc++.h>

using namespace std;

string f(int a, int b) {
    if (a * b & 1) {
        return "Odd";
    }
    return "Even";
}

int main() {

    int a;
    cin >> a;

    int b;
    cin >> b;

    string result = f(a, b);
    cout << result << endl;

    return 0;
}
