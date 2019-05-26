#include <iostream>

using namespace std;

char f(char x, char y) {
    if (x < y) {
        return '<';
    } else if (x > y) {
        return '>';
    }
    return '=';
}

int main() {

    char x, y;
    cin >> x >> y;

    char result = f(x, y);
    cout << result << endl;

    return 0;
}
