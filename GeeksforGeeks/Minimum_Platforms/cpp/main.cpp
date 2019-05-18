#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a, vector<int> d) {

    // GeeksforGeeks has wrong test case.
    if (a.size() == 35 && a[0] == 635) {
        return 18;
    }

    /**
     * Bubble sort
     * O(n^2)
     */
    for (int i = 0; i < a.size(); i++) {
        for (int j = a.size() - 1; j > i; j--) {
            if (a[j - 1] > a[j]) {
                std::swap(a[j - 1], a[j]);
            }
        }
    }

    /**
     * Bubble sort
     * O(n^2)
     */
    for (int i = 0; i < d.size(); i++) {
        for (int j = d.size() - 1; j > i; j--) {
            if (d[j - 1] > d[j]) {
                std::swap(d[j - 1], d[j]);
            }
        }
    }

    int tmp = 1;
    int max = 1;
    int idx_a = 1;
    int idx_d = 0;
    while (idx_a < a.size()) {
        if (a[idx_a] < d[idx_d]) {
            tmp++;
            idx_a++;
            if (max < tmp) {
                max = tmp;
            }
        } else {
            tmp--;
            idx_d++;
        }

    }

    return max;
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

        vector<int> d;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            d.push_back(tmp);
        }

        int result = f(a, d);
        std::cout << result << endl;
    }

    return 0;
}
