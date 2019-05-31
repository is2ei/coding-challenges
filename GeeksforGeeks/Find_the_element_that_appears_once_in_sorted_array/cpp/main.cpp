#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> a) {

    if (a[0] != a[1]) {
        return a[0];
    }

    if (a[a.size() - 2] != a[a.size() - 1]) {
        return a[a.size() - 1];
    }

    for (int i = 1; i < a.size() - 2; i++) {
        if (a[i] != a[i - 1] && a[i] != a[i + 1]) {
            return a[i];
        }
    }

    return -1;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        cout << result << endl;
    }

    return 0;
}
