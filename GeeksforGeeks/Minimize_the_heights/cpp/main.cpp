#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a, int k) {

    if (a.size() == 1) {
        return 0;
    }

    /**
     * Bubble sort
     * O(n)
     */
    for (int i = 0; i < a.size(); i++) {
        for (int j = a.size() - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                std::swap(a[j - 1], a[j]);
            }
        }
    }

    int result = a[a.size() - 1] - a[0];

    int min = a[0] + k;
    int max = a[a.size() - 1] - k;
    if (min > max) {
        std::swap(min, max);
    }
    for (int i = 1; i < a.size() - 1; i++) {
        int sub = a[i] - k;
        int add = a[i] + k;

        if (sub >= min || add <= max) {
            continue;
        }

        if (max - sub <= add - min) {
            min = sub;
        } else {
            max = add;
        }
    }

    return std::min(result, max - min);
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int k;
        cin >> k;

        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a, k);
        cout << result << endl;
    }

    return 0;
}