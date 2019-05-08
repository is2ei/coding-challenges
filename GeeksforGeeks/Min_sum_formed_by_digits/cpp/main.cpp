#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }

    int a = 0;
    int b = 0;
    while (!q.empty()) {
        a = a * 10;
        a += q.top();
        q.pop();

        if (q.empty()) {
            break;
        }

        b = b * 10;
        b += q.top();
        q.pop();
    }

    int sum = a + b;

    return sum;
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
