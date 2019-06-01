#include <iostream>

using namespace std;

string f(int n) {
    if (n == 100) {
        return "Perfect";
    }
    if (n >= 90) {
        return "Great";
    }
    if (n >= 60) {
        return "Good";
    }
    return "Bad";
}

int main() {

    int n;
    cin >> n;

    string result = f(n);
    cout << result << endl;

    return 0;
}
