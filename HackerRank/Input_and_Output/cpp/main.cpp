#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int f(int a, int b, int c) {
    return a + b + c;
}

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int result = f(a, b, c);
    cout << result << endl;

    return 0;
}
