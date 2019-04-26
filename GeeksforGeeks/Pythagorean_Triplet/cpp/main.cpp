#include <bits/stdc++.h>

using namespace std;

string f(vector<int> a) {

    sort(a.begin(), a.end());

    for (int i = 0; i < a.size(); i++) {
        a[i] = a[i] * a[i];
    }

    for (int i = a.size() - 1; i >= 0 ; i--) {
        for (int j = i - 1; j >= 0; j--) {
            for (int k = j - 1; k >= 0; k--) {
                if (a[i] == a[j] + a[k]) {
                    return "Yes";
                }
                if (a[i] > a[j] + a[k]) {
                    break;
                }
            }
        }
    }

    return "No";
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

        string result = f(a);
        cout << result << endl;
    }

    return 0;
}