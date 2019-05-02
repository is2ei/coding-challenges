#include <bits/stdc++.h>

using namespace std;

// Read integer
// int a;
// cin >> a;
// cin.ignore(numeric_limits<streamsize>::max(), '\n');

// Read string
// string s;
// getline(cin, s);

namespace is2ei {

    void rotateLeft(vector<int>& arr) {
        if (arr.size() == 1) {
            return;
        }

        int tmp = arr[0];
        for (int i = 0; i < arr.size() - 1; i++) {
            arr[i] = arr[i + 1];
        }
        arr[arr.size() - 1] = tmp;
    }

    void bubbleSort(vector<int>& arr) {
        for (int i = 0; i < arr.size() - 1; i++) {
            for (int j = arr.size() - 1; j > i; j--) {
                if (arr[j - 1] > arr[j]) {
                    int tmp = arr[j - 1];
                    arr[j - 1] = arr[j];
                    arr[j] = tmp;
                }
            }
        }
    }

}

int main() {

    return 0;
}