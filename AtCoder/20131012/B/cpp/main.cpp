#include <iostream>
#include <iomanip>

using namespace std;

int f(int m) {

    if (m >70000) {
        return 89;
    }
    if (m >= 35000 && m <= 70000) {
        return ( (m - 30000) / 5 + 80000) / 1000;  
    }
    if (m >= 6000 && m <= 30000) {
        return m / 1000 + 50;
    }
    if (m >= 100 && m <= 5000) {
        return m / 100;
    }
    if (m <= 1000) {
        return 0;
    }

    return m / 1000;
}

int main() {

    int m;
    cin >> m;

    int result = f(m);
    cout << setfill('0') << setw(2) << result << endl;

    return 0;
}
