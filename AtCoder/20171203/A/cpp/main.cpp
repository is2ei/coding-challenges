#include <bits/stdc++.h>

using namespace std;

int f(int n, int a, int b) {
    return std::min(n * a, b);
}

int main() {

    int n, a, b;
    cin >> n >> a >> b;

    int result = f(n, a, b);
    cout << result << endl;

    return 0;
}
