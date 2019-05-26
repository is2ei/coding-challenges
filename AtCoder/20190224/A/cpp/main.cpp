#include <iostream>

using namespace std;

string f(string s) {
    if (s[5] - '0' > 0) {
        return "TBD";
    }
    if (s[6] - '0' > 4) {
        return "TBD";
    }
    return "Heisei";
}

int main() {

    string s;
    cin >> s;

    string result = f(s);
    cout << result << endl;

    return 0;
}
