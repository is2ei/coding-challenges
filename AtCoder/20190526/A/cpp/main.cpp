#include <iostream>

using namespace std;

int f(int a, int p) {
    return (a * 3 + p) / 2;
}

int main() {
 
    int a, p;
    cin >> a >> p;

    int result = f(a, p);
    cout << result << endl;
 
    return 0;
}
