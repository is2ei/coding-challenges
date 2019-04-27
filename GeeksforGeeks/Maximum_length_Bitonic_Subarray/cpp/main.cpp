#include <bits/stdc++.h>

using namespace std;

int f(vector<int> arr) {

    int max = 0;
    int count = 0;
    for (int i = 0; i < arr.size() - 1; i++) {

        if (arr[i] > arr[i + 1]) {
            if (i == 0 || count > 0) {
                for (; i < arr.size() - 1; i++) {
                    if (arr[i] < arr[i + 1]) {
                        break;
                    }
                    if (count == 0) {
                        count = 2;
                    } else {
                        count++;
                    }
                    if (max < count) {
                        max = count;
                    }
                }
            }
            count = 0;
        }

        if (arr[i] < arr[i + 1]) {
            if (count == 0) {
                count = 2;
            } else {
                count++;
            }
            if (max < count) {
                max = count;
            }
        }

    }

    return max;
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