#include <bits/stdc++.h>

using namespace std;

string f(string w) {
    return w + 's';
}

int main() {

    string w;
    cin >> w;

    string result = f(w);
    cout << result << endl;

    return 0;
}
