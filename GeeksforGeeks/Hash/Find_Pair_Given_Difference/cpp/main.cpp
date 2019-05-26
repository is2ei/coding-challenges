#include <iostream>
#include <vector>
#include <set>

using namespace std;

int f(vector<int> a, int n) {
    set<int> s;
    for (int i = 0; i < a.size(); i++) {
        s.insert(a[i]);
    }
    for (int i = 0; i < a.size(); i++) {
        if (s.find(a[i] + n) != s.end()) {
            return 1;
        }
    }
    return -1;
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int l, n;
        cin >> l >> n;

        vector<int> a;
        for (int i = 0; i < l; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a, n);
        cout << result << endl;
    }

    return 0;
}
