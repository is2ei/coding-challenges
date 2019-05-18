#include <bits/stdc++.h>

using namespace std;

void f(int a, int b) {

    cout << "A:";
    while (a--) {
        cout << "]";
    }
    cout << endl;

    cout << "B:";
    while (b--) {
        cout << "]";
    }
    cout << endl;

}

int main() {

    int a, b;
    cin >> a >> b;

    f(a, b);

    return 0;
}
