#include <bits/stdc++.h>

using namespace std;

int f(int n) {
    if (n == 12) {
        return 1;
    }
    return n + 1;
}

int main() {

    int n;
    cin >> n;

    int result = f(n);
    cout << result << endl;

    return 0;
}
