#include <bits/stdc++.h>

using namespace std;

int f(vector<int> heap) {
    return log2(heap.size());
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}
