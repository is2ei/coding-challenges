#include <iostream>

using namespace std;

string f(float a, float b, float c, float d) {
    float ab = b / a;
    float cd = d / c;

    if (ab > cd) {
        return "TAKAHASHI";
    }
    if (ab < cd) {
        return "AOKI";
    }
    return "DRAW";
}

int main() {

    int a, b, c, d;
    cin >> a >> b >> c >> d;    

    string result = f(a, b, c, d);
    cout << result << endl;

    return 0;
}
