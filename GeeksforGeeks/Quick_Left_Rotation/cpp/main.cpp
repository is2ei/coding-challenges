#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int> arr) {

    for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i] << " ";
    }
    cout << arr[arr.size() - 1] << endl;

}

vector<int> f(vector<int> arr, int k) {

    if (k > arr.size()) {
        k = k % arr.size();
    }

    vector<int> result;
    for (int i = k; i < arr.size(); i++) {
        result.push_back(arr[i]);
    }
    for (int i = 0; i < k; i++) {
        result.push_back(arr[i]);
    }

    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
        int n;
        cin >> n;

        int k;
        cin >> k;

        vector<int> arr;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        vector<int> result = f(arr, k);
        printResult(result);
    }

    return 0;
}