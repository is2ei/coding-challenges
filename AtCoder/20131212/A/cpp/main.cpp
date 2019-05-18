#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n + factorial(n - 1);
}

int f(int n) {
    return factorial(n) * 10000 / n;
}

int main() {

    int n;
    cin >> n;

    int result = f(n);
    cout << result << endl;

    return 0;
}
