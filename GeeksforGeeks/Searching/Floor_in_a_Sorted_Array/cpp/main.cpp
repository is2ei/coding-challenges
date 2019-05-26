#include <iostream>
#include <vector>

using namespace std;

int f(vector<int> a, int x) {
    int idx = -1;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] <= x && (idx == -1 || a[idx] < a[i])) {
            idx = i;
        }
    }
    return idx;
} 

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n, x;
        cin >> n >> x;

        vector<int> a;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a, x);
        cout << result << endl;
    }

    return 0;
}
