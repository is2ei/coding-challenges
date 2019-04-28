#include <bits/stdc++.h>

using namespace std;

vector<int> f(int n) {

    queue<int> q;

    for (int i = 1; i < 10; i++) {
        q.push(i);
    }

    vector<int> v;
    v.push_back(0);
    while (!q.empty()) {
        int num = q.front();
        q.pop();

        if (num > n) {
            break;
        }

        v.push_back(num);

        int last_digit = num % 10;
        if (last_digit > 0) {
            q.push(num * 10 + (last_digit - 1));
        }
        if (last_digit < 9) {
            q.push(num * 10 + (last_digit + 1));
        }
    }

    return v;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> result = f(n);

        if (result.empty()) {
            continue;
        }

        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result[result.size() - 1] << endl;

    }

    return 0;
}