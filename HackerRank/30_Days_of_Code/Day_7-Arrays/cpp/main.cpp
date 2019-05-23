#include <bits/stdc++.h>

using namespace std;

void f(vector<int> arr) {
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (i < arr.size() - 1) {
            cout << " ";
        }
        cout << arr[i];
        if (i == 0) {
            cout << endl;
        }
    }
}

int main() {

    int t;
    cin >> t;

    vector<int> arr;
    for (int i = 0; i < t; i++) {
        int tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    f(arr);

    return 0;
}
