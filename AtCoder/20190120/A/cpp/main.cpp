#include <iostream>

using namespace std;

int f(int ab, int bc, int ca) {
    if (ab > bc && ab > ca) {
        return bc * ca / 2;
    }
    if (bc > ab && bc > ca) {
        return ab * ca / 2;
    }
    return ab * bc / 2;
}

int main() {

    int ab, bc, ca;
    cin >> ab >> bc >> ca;

    int result = f(ab, bc, ca);
    cout << result << endl;

    return 0;
}
