#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int> a) {
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
        if (i + 1 == a.size()) {
            cout << endl;
        }
    }
}

vector<int> f(vector<int> a) {

    int first = INT_MAX;
    int second = INT_MAX;
    for (int i = 0; i < a.size(); i++) {
        if (first > a[i]) {
            second = first;
            first = a[i];
        } else if (first != a[i] && second > a[i]) {
            second = a[i];
        }
    }

    vector<int> result;
    if (first == second || first == INT_MAX || second == INT_MAX) {
        result.push_back(-1);
        return result;
    }

    result.push_back(first);
    result.push_back(second);
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

        vector<int> result = f(a);
        printResult(result);
    }

    return 0;
}
