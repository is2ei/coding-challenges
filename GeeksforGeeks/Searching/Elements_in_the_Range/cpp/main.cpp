#include <iostream>
#include <vector>

using namespace std;

bool f(vector<int> arr, int a, int b) {
    int count = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] >= a && arr[i] <= b) {
            count++;
        }
    }

    return b - a + 1 == count;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n, a, b;
        cin >> n >> a >> b;

        vector<int> arr;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        if (f(arr, a, b)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
