#include <bits/stdc++.h>

using namespace std;

void printResult(bool isOdd) {
    if (isOdd) {
        cout << "odd\n";
    } else {
        cout << "even\n";
    }
}

bool f(int n) {
    bool parity = 0;
    while (n) {
        parity = !parity;
        n = n & (n - 1);
    }
    return parity;
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
