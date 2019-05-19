#include <bits/stdc++.h>

using namespace std;

int f(int n) {

    int count = 0;
    for (int i = 0; i <= n; i++) {
        int d = i;
        while (d) {
            d &= d - 1;
            count++;
        }
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
