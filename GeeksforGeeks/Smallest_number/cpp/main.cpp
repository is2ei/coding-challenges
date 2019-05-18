#include <bits/stdc++.h>

using namespace std;

int f(int s, int d) {

    if (s  > d * 9) {
        return -1;
    }

    if (d == 1) {
        return s;
    }

    s--;

    int m = 1;
    int result = 0;
    for (int i = 0; i < d - 1; i++) {

        if (s > 9) {
            result += 9 * m;
            s -= 9;
        } else {
            result += s * m;
            s = 0;
        }

        m *= 10;
    }

    s++;
    for (int i = 0; i < d - 1; i++) {
        s *= 10;
    }

    result += s;

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int s;
        cin >> s;

        int d;
        cin >> d;

        int result = f(s, d);
        cout << result << endl;
    }

    return 0;
}
