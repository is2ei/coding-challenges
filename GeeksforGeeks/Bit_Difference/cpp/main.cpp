#include <bits/stdc++.h>

using namespace std;

int f(int a, int b) {

    unsigned int c = a ^ b;

    // Brian Kernighan's Algorithm
    unsigned int count;
    for (count = 0; c; count++) {
        // clear the least significant bit set
        c &= c - 1;
    }

    return count;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int a;
        cin >> a;

        int b;
        cin >> b;

        int result = f(a, b);
        cout << result << endl;
    }

    return 0;
}
