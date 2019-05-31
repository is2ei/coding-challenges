#include <bits/stdc++.h>

using namespace std;

int f(int n) {

    // Brian Kernighan's Algorithm
    unsigned int count;
    for (count = 0; n; count++) {
        // clear the least significant bit set
        n &= n - 1;
    }

    return count;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int result = f(n);
        cout << result << endl;
    }

    return 0;
}
