#include <iostream>

using namespace std;

void f(int d) {
    if (d == 25) {
        cout << "Christmas" << endl;
    } else if (d == 24) {
        cout << "Christmas Eve" << endl;
    } else if (d == 23) {
        cout << "Christmas Eve Eve" << endl;
    } else if (d == 22) {
        cout << "Christmas Eve Eve Eve" << endl;
    }
}

int main() {

    int d;
    cin >> d;

    f(d);

    return 0;
}
