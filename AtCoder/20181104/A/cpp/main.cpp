#include <iostream>

using namespace std;

int f(int x, int y) {
    return x + y / 2;
}

int main() {

    int x, y;
    cin >> x >> y;

    int result = f(x, y);
    cout << result << endl;

    return 0;
}
