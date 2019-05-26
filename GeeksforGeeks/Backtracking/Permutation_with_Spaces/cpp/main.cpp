#include <bits/stdc++.h>

using namespace std;

void printResult(vector<string> arr) {

    for (int i = 0; i < arr.size(); i++) {
        cout << "(" << arr[i] << ")";
    }
    cout << endl;
}

void f2(string s, int idx, string tmp, vector<string>& result) {

    tmp += s[idx];

    if (idx + 1 == s.size()) {
        result.push_back(tmp);
        return;
    }

    f2(s, idx + 1, tmp + ' ', result);
    f2(s, idx + 1, tmp, result);
}

vector<string> f(string s) {
    vector<string> result;
    f2(s, 0, "", result);
    return result;
}


int main() {

    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);

        vector<string> result = f(s);
        printResult(result);

    }

    return 0;
}