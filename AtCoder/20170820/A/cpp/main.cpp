#include <iostream>

using namespace std;

char f(int x, int a, int b) {
    if (abs(x - a) < abs(x - b)) {
        return 'A';
    }
    return 'B';
}

int main() {

    int x, a, b;
    cin >> x >> a >> b;

    char result = f(x, a, b);
    cout << result << endl;

    return 0;
}
