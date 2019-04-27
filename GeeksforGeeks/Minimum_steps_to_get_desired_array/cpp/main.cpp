#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a) {

    int count = 0;
    while (true) {
        bool divide = false;
        bool has_element = false;
        for (int i = 0; i < a.size(); i++) {
            if (a[i] % 2 != 0) {
                a[i]--;
                count++;
            }

            if (a[i] == 0) {
                continue;
            }

            a[i] /= 2;
            divide = true;
        }

        if (divide == true) {
            count++;
        } else {
            break;
        }
    }

    return count;
}


int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        vector<int> a;
        for (int j = 0; j < n; j++) {
            int tmp;
            cin >> tmp;
            a.push_back(tmp);
        }

        int result = f(a);
        cout << result << endl;
    }

    return 0;
}