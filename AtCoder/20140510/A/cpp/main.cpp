#include <bits/stdc++.h>

using namespace std;

int f(int s, int t) {
    return t - s + 1;
}

int main() {

    int s, t;
    cin >> s >> t;

    int result = f(s, t);
    cout << result << endl;

    return 0;
}
