#include <bits/stdc++.h>

using namespace std;

int f(vector<pair<int, int>> arr) {
    int result = 0;
    for (int i = 0; i < arr.size(); i++) {
        result += arr[i].second - arr[i].first + 1;
    }
    return result;
}

int main() {

    int n;
    cin >> n;

    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        int l;
        cin >> l;

        int r;
        cin >> r;

        pair<int, int> tmp = make_pair(l, r);
        arr.push_back(tmp);
    }

    int result = f(arr);
    cout << result << endl;

    return 0;
}
