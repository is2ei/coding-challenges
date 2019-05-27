#include <iostream>

using namespace std;

void f(string n) {
    cout << "ABC" << n << endl;
}

int main() {

    string n;
    cin >> n;

    f(n);

    return 0;
}
