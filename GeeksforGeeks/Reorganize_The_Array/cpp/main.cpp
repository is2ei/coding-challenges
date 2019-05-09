#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int> arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size() - 1] << endl;
}

void f(vector<int>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] == -1) {
            continue;
        }
        if (arr[i] == i) {
            continue;
        }
        if (arr[arr[i]] == -1) {
            std::swap(arr[i], arr[arr[i]]);
            continue;
        }
        std::swap(arr[i], arr[arr[i]]);
        i--;
    }
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

        f(arr);
        printResult(arr);
    }

    return 0;
}
