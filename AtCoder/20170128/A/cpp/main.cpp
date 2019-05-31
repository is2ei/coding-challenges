#include <iostream>

using namespace std;

string f(int x) {
    if (x < 1200) {
        return "ABC";
    }
    return "ARC";
}

int main() {

    int x;
    cin >> x;

    string result = f(x);
    cout << result << endl;

    return 0;
}
