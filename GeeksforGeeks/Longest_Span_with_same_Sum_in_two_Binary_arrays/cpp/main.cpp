#include <bits/stdc++.h>

using namespace std;

int f(vector<int> a, vector<int> b) {
    int arr_a[200][200] = {0};
    for (int i = 0; i < a.size(); i++) {
        int sum = a[i];
        for (int j = i + 1; j < a.size(); j++) {
            sum += a[j];
            arr_a[i][j] = sum;
        }
    }

    int arr_b[200][200] = {0};
    for (int i = 0; i < b.size(); i++) {
        int sum = b[i];
        for (int j = i + 1; j < b.size(); j++) {
            sum += b[j];
            arr_b[i][j] = sum;
        }
    }

    int diff = a.size() - 1;
    while (diff > 0) {
        for (int i = 0; i < a.size() - diff; i++) {
            if (arr_a[i][i + diff] == arr_b[i][i + diff]) {
                return diff + 1;
            }
        }
        diff--;
    }

    return 0;
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

        vector<int> b;
        for (int i = 0; i < n; i++) {
            int tmp;
            cin >> tmp;
            b.push_back(tmp);
        }

        int result = f(a, b);
        std::cout << result << endl;
    }

	return 0;
}