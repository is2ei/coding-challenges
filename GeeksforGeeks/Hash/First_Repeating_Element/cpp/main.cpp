#include <iostream>
#include <vector>
#include <map>

using namespace std;

int f(vector<int> arr) {

    int min = -1;
    map<int, int> m;
    for (int i = 0; i < arr.size(); i++) {
        if (m.find(arr[i]) != m.end()) {
            if (min == -1 || min > m[arr[i]]) {
                min = m[arr[i]];
            }
        } else {
            m[arr[i]] = i;
        }
    }

    if (min == -1) {
        return min;
    }

    return min + 1;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> arr;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            arr.push_back(tmp);
        }

        int result = f(arr);
        cout << result << endl;
    }

    return 0;
}
