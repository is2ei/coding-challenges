#include <iostream>
#include <vector>

using namespace std;

void printResult(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        if (i > 0) {
            cout << " ";
        }
        cout << a[i];
        if (i + 1 == a.size()) {
            cout << endl;
        }
    }
}

void f(vector<int>& a) {
    for (int i = 0; i < a.size() - 1; i++) {
        if (a[i] > a[i + 1]) {
            a[i] = a[i + 1];
        } else {
            a[i] = -1;
        }
    }
    a[a.size() - 1] = -1;
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

        f(a);
        printResult(a);
    }

    return 0;
}
