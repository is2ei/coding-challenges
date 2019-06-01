#include <iostream>

using namespace std;

int f(int l1, int l2, int l3) {
    if (l1 == l2) {
        return l3;
    }
    if (l1 == l3) {
        return l2;
    }
    return l1;
}

int main() {

    int l1, l2, l3;
    cin >> l1 >> l2 >> l3;

    int result = f(l1, l2, l3);
    cout << result << endl;

    return 0;
}
