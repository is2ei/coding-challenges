#include <iostream>

using namespace std;

int memo[300][300];

int f2(string& s1, int p1, string& s2, int p2) {

    if (p1 < 0 || p2 < 0) {
        return 0;
    }

    if (memo[p1][p2] != -1) {
        return memo[p1][p2];
    }

    if (s1[p1] == s2[p2]) {
        memo[p1][p2] = f2(s1, p1 - 1, s2, p2 - 1) + 1;
    } else {
        memo[p1][p2] = std::max(
            f2(s1, p1 - 1, s2, p2),
            f2(s1, p1, s2, p2 - 1)
        );
    }

    return memo[p1][p2];
}

int f(string s1, string s2) {
    for (int i = 0; i < 300; i++) {
        for (int j = 0; j < 300; j++) {
            memo[i][j] = -1;
        }
    }
    return f2(s1, s1.size() - 1, s2, s2.size() -1);
}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        
        int a, b;
        cin >> a >> b;

        string s1, s2;
        cin >> s1 >> s2;

        int result = f(s1, s2);
        cout << result << endl;
    }

    return 0;
}
