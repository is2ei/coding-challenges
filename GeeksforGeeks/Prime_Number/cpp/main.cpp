#include <bits/stdc++.h>

using namespace std;

string f(int n) {
    if (n <= 1) {
        return "No";
    }

    if (n <= 3) {
        return "Yes";
    }

    if (n % 2 == 0 || n % 3 == 0) {
        return "No";
    } 

    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return "No";
        }
    }

    return "Yes";    
}

int main() {

    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {

        int n;
        cin >> n;

        string result = f(n);
        cout << result << endl;
    }

    return 0;
}