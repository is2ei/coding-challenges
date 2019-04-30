#include <bits/stdc++.h>

using namespace std;

void bubbleSort(vector<vector<int>>& arr) {

    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i][0] > arr[j][0]) {
                vector<int> tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }

}

void printResult(vector<vector<int>>& arr) {
    for (int i = 0; i < arr.size() - 1; i++) {
        cout << arr[i][0] << " " << arr[i][1] << " ";
    }
    cout << arr[arr.size() - 1][0] << " " << arr[arr.size() - 1][1] << endl;
}

vector<vector<int>> f(vector<vector<int>> arr) {

    bubbleSort(arr);

    bool merged = true;
    while (merged == true) {
        merged = false;

        for (int i = 0; i < arr.size(); i++) {
            for (int j = i + 1; j < arr.size(); j++) {
                if (arr[i][0] < arr[j][0] && arr[i][1] < arr[j][0]) {
                    continue;
                }

                int start = std::min(arr[i][0], arr[j][0]);
                int end = std::max(arr[i][1], arr[j][1]);

                vector<int> tmp;
                tmp.push_back(start);
                tmp.push_back(end);

                arr.erase(arr.begin() + i);
                arr.erase(arr.begin() + j - 1);
                arr.push_back(tmp);
                bubbleSort(arr);
                merged = true;
                break;
            }
        }
    }

    bubbleSort(arr);

    return arr;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<vector<int>> arr;
        for (int j = 0; j < n; j++) {
            int x;
            cin >> x;

            int y;
            cin >> y;

            vector<int> tmp;
            tmp.push_back(x);
            tmp.push_back(y);

            arr.push_back(tmp);
        }

        vector<vector<int>> result = f(arr);
        printResult(result);

    }

    return 0;
}