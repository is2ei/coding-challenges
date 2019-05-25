#include <iostream>

using namespace std;

string f(int a, int b) {
    if (a > b && a > b * 2) {
        return ":(";
    }
    if (a < b && a * 2 < b) {
        return ":(";
    }

    return "Yay!";
}

int main() {

    int a, b;
    cin >> a >> b;

    string result = f(a, b);
    cout << result << endl;

    return 0;
}
