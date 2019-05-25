#include <bits/stdc++.h>

using namespace std;

int f(int a, int b) {

    if (a >= 13) {
        return b;
    } else if (a >= 6) {
        return b / 2;
    }

    return 0;
}

int main() {

    int a, b;
    cin >> a >> b;

    int result = f(a, b);
    cout << result << endl;

    return 0;
}
