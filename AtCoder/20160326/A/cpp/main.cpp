#include <iostream>

using namespace std;

string f(int w, int h) {
    int x = w - h;

    if (w % x == 0 && h % x == 0) {
        w /= x;
        h /= x;
    }

    if (w == 4 && h == 3) {
        return "4:3";
    }

    return "16:9";
}

int main() {

    int w, h;
    cin >> w >> h;

    string result = f(w, h);
    cout << result << endl;

    return 0;
}
