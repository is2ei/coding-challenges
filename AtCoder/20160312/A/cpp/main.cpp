#include <iostream>

using namespace std;

string f(int x, int y) {
    if (x < y) {
        return "Better";
    }
    return "Worse";
}

int main() {

    int x, y;
    cin >> x >> y;

    string result = f(x, y);
    cout << result << endl;

    return 0;
}
