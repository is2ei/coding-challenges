#include <bits/stdc++.h>

using namespace std;

long f(vector<int> arr) {

    priority_queue<long, vector<long>, greater<long>> q;

    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }

    long cost = 0;
    while (q.size() > 1) {
        int tmp = q.top();
        q.pop();
        tmp += q.top();
        q.pop();
        cost += tmp;
        q.push(tmp);
    }

    return cost;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> arr;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        long result = f(arr);
        cout << result << endl;

    }

    return 0;
}