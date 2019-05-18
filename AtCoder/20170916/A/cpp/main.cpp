#include <bits/stdc++.h>

using namespace std;

int f(int n, int a) {
    return n * n - a;
}

int main() {

    int n;
    cin >> n;

    int a;
    cin >> a;

    int result = f(n, a);
    cout << result << endl;

    return 0;
}
