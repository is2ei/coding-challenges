#include <iostream>

using namespace std;

int f(string s) {

    int result = 700;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == 'o') {
            result += 100;
        }
    }

    return result;
}

int main() {

    string s;
    cin >> s;

    int result = f(s);
    cout << result << endl;

    return 0;
}
