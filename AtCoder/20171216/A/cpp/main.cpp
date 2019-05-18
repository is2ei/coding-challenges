#include <bits/stdc++.h>

using namespace std;

int f(int a, int b) {
    int x = (a * 10 + b * 10) / 2;
    if (x % 10 > 0) {
        x += 10;
    }
    x /= 10;
    return x;
}

int main() {

    int a;
    cin >> a;

    int b;
    cin >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
