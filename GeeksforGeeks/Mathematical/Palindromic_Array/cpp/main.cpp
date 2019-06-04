#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a) {

    int idx_left = 0;
    int idx_right = a.size() - 1;

    int count = 0;
    while (idx_left < idx_right) {
        if (a[idx_left] < a[idx_right]) {
            a[idx_left] += a[idx_left + 1];
            a.erase(a.begin() + idx_left + 1);
            count++;
            idx_right--;
            continue;
        } else if (a[idx_left] > a[idx_right]) {
            a[idx_right] += a[idx_right - 1];
            a.erase(a.begin() + idx_right - 1);
            count++;
            idx_right--;
            continue;
        }

        idx_left++;
        idx_right--;
    }


    return count;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        cout << result << endl;
    }

    return 0;
}