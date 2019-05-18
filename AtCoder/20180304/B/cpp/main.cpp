#include <bits/stdc++.h>

using namespace std;

string f(vector<char> arr) {
    set<char> s;
    for (int i = 0; i < arr.size(); i++) {
        s.insert(arr[i]);
    }

    if (s.size() == 4) {
        return "Four";
    }

    return "Three";
}

int main() {

    int n;
    cin >> n;

    vector<char> s;
    for (int i = 0; i < n; i++) {
        char tmp;
        cin >> tmp;
        s.push_back(tmp);
    }

    string result = f(s);
    cout << result << endl;

    return 0;
}
