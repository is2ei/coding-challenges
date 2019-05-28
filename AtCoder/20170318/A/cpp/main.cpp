#include <iostream>

using namespace std;

char f(char a, char b) {
    if (a == b) {
        return 'H';
    }
    return 'D';
}

int main() {

    char a, b;
    cin >> a >> b;

    char result = f(a, b);
    cout << result << endl;

    return 0;
}
