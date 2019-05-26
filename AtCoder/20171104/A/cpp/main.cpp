#include <iostream>
#include <vector>

using namespace std;

bool f(vector<char> arr) {
    if (arr[0] != arr[5]) {
        return false;
    }

    if (arr[1] != arr[4]) {
        return false;
    }

    if (arr[2] != arr[3]) {
        return false;
    }

    return true;
}

int main() {

    vector<char> arr;
    for (int i = 0; i < 6; i++) {
        char tmp;
        cin >> tmp;
        arr.push_back(tmp);
    }

    if (f(arr)) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
