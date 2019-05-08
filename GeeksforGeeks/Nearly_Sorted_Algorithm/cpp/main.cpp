#include <bits/stdc++.h>

using namespace std;


void f(vector<int>& arr) {

    /**
     * Insertion sort
     * O(nk)
     */
//    for (int i = 0; i < arr.size(); i++) {
//
//        int tmp = arr[i];
//        int idx = i;
//
//        while (idx > 0 && arr[idx - 1] > tmp) {
//            arr[idx] = arr[idx - 1];
//            idx--;
//        }
//        arr[idx] = tmp;
//    }

    /**
     * Heap (priority queue)
     * O(n log k)
     */
    std::priority_queue<int, vector<int>, greater<int>> q;
    for (int i = 0; i < arr.size(); i++) {
        q.push(arr[i]);
    }

    int idx = 0;
    while (!q.empty()) {
        arr[idx] = q.top();
        q.pop();
        idx++;
    }
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

        f(arr);

        for (int i = 0; i < arr.size() - 1; i++) {
            cout << arr[i] << " ";
        }
        cout << arr[arr.size() - 1] << endl;
    }
}