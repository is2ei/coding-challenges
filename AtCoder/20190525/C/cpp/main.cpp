#include <bits/stdc++.h>

using namespace std;

int f(int n, vector<pair<int, int>> queries) {

    int min = INT_MIN;
    int max = INT_MAX;
    for (int i = 0; i < queries.size(); i++) {
        if (min < queries[i].first) {
            min = queries[i].first;
        }
        if (max > queries[i].second) {
            max = queries[i].second;
        }
    }

    if (max - min < 0) {
        return 0;
    }

    return max - min + 1;
}

int main() {

    int n, m;
    cin >> n >> m;

    vector<pair<int, int>> queries;
    for (int i = 0; i < m; i++) {
        pair<int, int> p;
        cin >> p.first;
        cin >> p.second;
        queries.push_back(p);
    }

    int result = f(n, queries);
    cout << result << endl;

    return 0;
}
