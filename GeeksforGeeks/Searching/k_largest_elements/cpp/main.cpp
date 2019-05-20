#include <bits/stdc++.h>

using namespace std;

vector<int> f(vector<int> arr, int k) {

    vector<int> result;

    /**
     * Bubble sort
     * O(n^2)
     */
//    for (int i = 0; i < arr.size(); i++) {
//        for (int j = arr.size() - 1; j > i; j--) {
//            if (arr[j - 1] < arr[j]) {
//                std::swap(arr[j - 1], arr[j]);
//            }
//        }
//    }
//
//    for (int i = 0; i < k; i++) {
//        result.push_back(arr[i]);
//    }

    /**
     * Heap
     * O(n + k log n)
     */
    priority_queue<int> q;
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }
    for (int i = 0; i < k; i++) {
        result.push_back(q.top());
        q.pop();
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
