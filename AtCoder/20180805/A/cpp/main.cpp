#include <iostream>

using namespace std;

string f(int r) {
    if (r < 1200) {
        return "ABC";
    }
    if (r < 2800) {
        return "ARC";
    }
    return "AGC";
}

int main() {

    int r;
    cin >> r;

    string result = f(r);
    cout << result << endl;

    return 0;
}
