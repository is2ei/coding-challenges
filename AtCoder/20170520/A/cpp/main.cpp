#include <iostream>
#include <set>

using namespace std;

bool isGroup01(int n) {
    if (n == 1 || n == 3 || n == 5 || n == 7 || n == 8 || n == 10 || n == 12) {
        return true;
    }
    return false;
}

bool isGroup02(int n) {
    if (n == 4 || n == 6 || n == 9 || n == 11) {
        return true;
    }
    return false;
}

bool isGroup03(int n) {
    if (n == 2) {
        return true;
    }
    return false;
}

string f(int x, int y) {


    if (isGroup01(x) && isGroup01(y)) {
        return "Yes";
    }
    if (isGroup02(x) && isGroup02(y)) {
        return "Yes";
    }
    if (isGroup03(x) && isGroup03(y)) {
        return "Yes";
    }

    return "No";
}

int main() {

    int x, y;
    cin >> x >> y;

    string result = f(x, y);
    cout << result << endl;

    return 0;
}
