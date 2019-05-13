#include <bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<vector<int>> arr;
    for (int i = 0; i < n; i++) {
        int k;
        cin >> k;
        vector<int> v;
        for (int j = 0; j < k; j++) {
            int tmp;
            cin >> tmp;
            v.push_back(tmp);
        }
        arr.push_back(v);
    }

    for (int i = 0; i < q; i++) {
        int a;
        cin >> a;
        int b;
        cin >> b;

        cout << arr[a][b] << endl;
    }

    return 0;
}
