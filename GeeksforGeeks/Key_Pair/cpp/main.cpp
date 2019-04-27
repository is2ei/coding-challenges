#include <bits/stdc++.h>

using namespace std;

string f(vector<int> a, int x) {

    sort(a.begin(), a.end());

    int count[100000] = {0};

    for (int i = 0; i < a.size(); i++) {
        count[a[i]]++;
    }

    for (int i = 0; i < a.size(); i++) {
        if (a[i] > x) {
            break;
        }

        if (count[x - a[i]] > 0) {
            if (count[x -a[i]] == 1 && x - a[i] == a[i]) {
                continue;
            }
            return "Yes";
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

        int x;
        cin >> x;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        string result = f(a, x);
        cout << result << endl;
    }

    return 0;
}