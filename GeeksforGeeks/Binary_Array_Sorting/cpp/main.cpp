#include <bits/stdc++.h>

using namespace std;

void f(int count_zero, int count_one) {

    if (count_zero > 0) {
        for (int i = 0; i < count_zero - 1; i++) {
            cout << 0 << " ";
        }
        cout << 0;

        if (count_one > 0) {
            cout << " ";
        }
    }

    if (count_one > 0) {
        for (int i = 0; i < count_one - 1; i++) {
            cout << 1 << " ";
        }
        cout << 1;
    }

    cout << endl;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        int count_zero = 0;
        int count_one = 0;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            if (tmp == 0) {
                count_zero++;
            } else {
                count_one++;
            }
        }

        f(count_zero, count_one);
    }

    return 0;
}
