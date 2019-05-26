#include <iostream>

using namespace std;

char f(char b) {
    if (b == 'A') {
        return 'T';
    }
    if (b == 'T') {
        return 'A';
    }
    if (b == 'C') {
        return 'G';
    }
    return 'C';
}

int main() {

    char b;
    cin >> b;

    char result = f(b);
    cout << result << endl;

    return 0;
}
