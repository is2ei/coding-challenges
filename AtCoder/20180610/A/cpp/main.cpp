#include <iostream>

using namespace std;

string f(int n) {
    if (n <= 999) {
        return "ABC";
    }
    return "ABD";
}

int main() {

    int n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
