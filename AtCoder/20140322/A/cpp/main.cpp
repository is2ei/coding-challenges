#include <bits/stdc++.h>

using namespace std;

int f(int x, int y) {
    return y / x;
}

int main() {

    int x, y;
    cin >> x >> y;

    int result = f(x, y);
    cout << result << endl;

    return 0;
}
