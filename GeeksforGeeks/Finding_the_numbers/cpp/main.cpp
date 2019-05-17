#include <bits/stdc++.h>

using namespace std;

void printResult(vector<int> arr) {
    cout << arr[0] << " " << arr[1] << endl;
}

vector<int> f(vector<int> arr) {

    int x = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        x ^= arr[i];
    }

    int set_bit_no = x & ~(x - 1);

    int a = 0;
    int b = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] & set_bit_no) {
            a = a ^ arr[i];
        } else {
            b = b ^ arr[i];
        }
    }

    if (a > b) {
        std::swap(a, b);
    }

    vector<int> result{a, b};
    return result;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> arr;
        for (int j = 0; j < 2 * n + 2; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        vector<int> result = f(arr);
        printResult(result);
    }

    return 0;
}
