#include <bits/stdc++.h>

using namespace std;

void f2(vector<string>& v, string s, int a, int b) {
    
    if (a == s.size()) {
        v.push_back(s);
    }

    for (int i = a; i < s.size(); i++) {
        std::swap(s[a], s[i]);
        f2(v, s, a + 1, b);
    }
}

vector<string> f(string s) {

    vector<string> v;

    f2(v, s, 0, 0);

    sort(v.begin(), v.end());

    return v;
}

int main() {
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        vector<string> result = f(s);
        for (int i = 0; i < result.size() - 1; i++) {
            cout << result[i] << " ";
        }
        cout << result[result.size() - 1] << endl;

    }

	return 0;
}