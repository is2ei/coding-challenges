#include <iostream>

using namespace std;

int f(int a) {
    int max = 0;
    for (int i = 1; i < a; i++) {
        int mul = i * (a - i);
        if (max < mul) {
            max = mul;
        }
    }
    return max;
}

int main() {

    int a;
    cin >> a;

    int result = f(a);
    cout << result << endl;

    return 0;
}
