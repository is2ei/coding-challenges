#include <bits/stdc++.h>

using namespace std;

void f(unsigned int r, unsigned int d, unsigned int x) {

    for (int i = 0; i < 10; i++) {
        x = r * x - d;
        cout << x << endl;
    }
}


int main() {

    unsigned int r, d, x;
    cin >> r >> d >> x;

    f(r, d, x);

    return 0;
}
