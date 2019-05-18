#include <bits/stdc++.h>

using namespace std;

int f(int n, int k) {
    int result = 1;
    for (int i = 0; i < n; i++) {
        if (result < k) {
            result *= 2;
        } else {
            result += k;
        }
    }

    return result;
}

int main() {

    int n;
    cin >> n;

    int k;
    cin >> k;

    int result = f(n, k);
    cout << result << endl;

    return 0;
}
