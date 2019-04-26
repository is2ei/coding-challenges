#include <bits/stdc++.h>

using namespace std;

int f2(int n) {
    
    if (n <= 0) {
        return 0;
    }

    return n + f2(n - 1);
}

int f(vector<int> a) {

    int count = 0;
    int tmp = 0;
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] < a[i]) {
            tmp++;
        } else {
            count += f2(tmp);
            tmp = 0;
        }
    }
    count += f2(tmp);

    return count;
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