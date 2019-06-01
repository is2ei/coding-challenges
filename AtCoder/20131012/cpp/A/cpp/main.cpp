#include <bits/stdc++.h>

using namespace std;

int f(int h1, int h2) {
    return h1 - h2;
}

int main() {

    int h1, h2;
    cin >> h1 >> h2;

    int result = f(h1, h2);
    cout << result << endl;

    return 0;
}
