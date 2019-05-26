#include <iostream>

using namespace std;

bool f2(char c) {
    if (c == 'A') {
        return true;
    }
    if (c == 'C') {
        return true;
    }
    if (c == 'G') {
        return true;
    }
    if (c == 'T') {
        return true;
    }
    return false;
}

int f(string s) {
    int count = 0;
    int max = 0;
    for (int i = 0; i < s.size(); i++) {
        if (f2(s[i])) {
            count++;
            if (max < count) {
                max = count;
            }
        } else {
            count = 0;
        }
    }
    return max;
}

int main() {

    string s;
    cin >> s;

    int result = f(s);
    cout << result << endl;

    return 0;
}
