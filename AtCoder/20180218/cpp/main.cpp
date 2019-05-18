#include <bits/stdc++.h>

using namespace std;

string f(int n, int a) {

    n %= 500;

    if (n <= a) {
        return "Yes";
    }

    return "No";
}

int main() {

    int n;
    cin >> n;

    int a;
    cin >> a;

    string result = f(n, a);
    cout << result << endl;

    return 0;
}
