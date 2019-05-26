#include <iostream>

using namespace std;

int f(int H, int W, int h, int w) {
    return (H - h) * (W - w);
}

int main() {

    int H, W, h, w;
    cin >> H >> W >> h >> w;

    int result = f(H, W, h, w);
    cout << result << endl;

    return 0;
}
