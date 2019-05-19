#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    int count = 0;
    int x = 1;
    while (x < n) {
        x <<= 1;
        count++;
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
