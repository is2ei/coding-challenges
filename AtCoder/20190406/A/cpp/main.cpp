#include <iostream>

using namespace std;

string f(int a, int b, int c, int d, int e, int k) {

    if (abs(a - b) > k) {
        return ":(";
    }
    if (abs(a - c) > k) {
        return ":(";
    }
    if (abs(a - d) > k) {
        return ":(";
    }
    if (abs(a - e) > k) {
        return ":(";
    }
    if (abs(b - c) > k) {
        return ":(";
    }
    if (abs(b - d) > k) {
        return ":(";
    }
    if (abs(b - e) > k) {
        return ":(";
    }
    if (abs(c - d) > k) {
        return ":(";
    }
    if (abs(c - e) > k) {
        return ":(";
    }
    if (abs(d - e) > k) {
        return ":(";
    }

    return "Yay!";
}

int main() {

    int a, b, c, d, e, k;
    cin >> a >> b >> c >> d >> e >> k;

    string result = f(a, b, c, d, e, k);
    cout << result << endl;

    return 0;
}
