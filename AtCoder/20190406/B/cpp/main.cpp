#include <iostream>

using namespace std;

int f3(int x) {
    int x_m = x % 10;
    if (x_m == 0) {
        return x;
    }
    return x - x_m + 10;
}

bool f2(int x, int y1, int y2, int y3, int y4) {
    if (x == 0) {
        return false;
    }
    if (y1 > 0 && x >= y1) {
        return false;
    }
    if (y2 > 0 && x >= y2) {
        return false;
    }
    if (y3 > 0 && x >= y3) {
        return false;
    }
    if (y4 > 0 && x >= y4) {
        return false;
    }
    return true;
}

int f(int a, int b, int c, int d, int e) {
    int a_m = a % 10;
    int b_m = b % 10;
    int c_m = c % 10;
    int d_m = d % 10;
    int e_m = e % 10;
    
    int a_r = f3(a);
    int b_r = f3(b);
    int c_r = f3(c);
    int d_r = f3(d);
    int e_r = f3(e);

    if (f2(a_m, b_m, c_m, d_m, e_m)) {
        return a + b_r + c_r + d_r + e_r;
    }
    if (f2(b_m, a_m, c_m, d_m, e_m)) {
        return b + a_r + c_r + d_r + e_r;
    }
    if (f2(c_m, b_m, a_m, d_m, e_m)) {
        return c + b_r + a_r + d_r + e_r;
    }
    if (f2(d_m, b_m, c_m, a_m, e_m)) {
        return d + b_r + c_r + a_r + e_r;
    }
    return e + b_r + c_r + d_r + a_r;
}

int main() {

    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int result = f(a, b, c, d, e);
    cout << result << endl;

    return 0;
}
