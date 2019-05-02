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

    void merge(vector<int>& left_arr, vector<int>& right_arr, vector<int>& arr) {
        int i = 0;
        int j = 0;
        while (i < left_arr.size() && j < right_arr.size()) {
            if (left_arr[i] < right_arr[j]) {
                arr[i + j] = left_arr[i];
                i++;
            } else {
                arr[i + j] = right_arr[j];
                j++;
            }
        }

        while (i < left_arr.size()) {
            arr[i + j] = left_arr[i];
            i++;
        }

        while (j < right_arr.size()) {
            arr[i + j] = right_arr[j];
            j++;
        }
    }

    void mergeSort(vector<int>& arr) {
        if (arr.size() <= 1) {
            return;
        }

        int left_size = arr.size() / 2;
        int right_size = arr.size() - left_size;

        vector<int> left_arr;
        vector<int> right_arr;

        for (int i = 0; i < left_size; i++) {
            left_arr.push_back(arr[i]);
        }

        for (int i = 0; i < right_size; i++) {
            right_arr.push_back(arr[left_size + i]);
        }

        mergeSort(left_arr);
        mergeSort(right_arr);
        merge(left_arr, right_arr, arr);
    }

}

int main() {

    return 0;
}