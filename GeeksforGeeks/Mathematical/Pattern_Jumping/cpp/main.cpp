#include <bits/stdc++.h>

using namespace std;

void printResult(bool flag) {
    if (flag) {
        cout << "True\n";
    } else {
        cout << "False\n";
    }
}

bool f(int n) {
    // Check if n is power of two.
    return n && !(n & (n - 1));
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
        int n;
        cin >> n;

        bool result = f(n);
        printResult(result);
    }

    return 0;
}
