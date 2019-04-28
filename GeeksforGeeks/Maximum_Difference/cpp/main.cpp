#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a) {

    int result = -1;
    int min = a[0];
    int max = a[1];
    for (int i = 0; i < a.size(); i++) {
        if (min >= a[i]) {
            min = a[i];
            max = a[i + 1];
            continue;
        }

        if (max <= a[i]) {
            max = a[i];

            if (result < max - min) {
                result = max - min;
            }
        }
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        cout << result << endl;
    }

    return 0;
}