#include <bits/stdc++.h>

using namespace std;

void f(int x, int a, int b) {

    x++;
    cout << x << endl;

    x *= (a + b);
    cout << x << endl;

    x *= x;
    cout << x << endl;

    x--;
    cout << x << endl;
}

int main() {

    int x, a, b;
    cin >> x >> a >> b;

    f(x, a, b);

    return 0;
}
