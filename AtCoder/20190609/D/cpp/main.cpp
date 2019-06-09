#include <iostream>
#include <vector>

int memo_v[3000][3000] = {0};
int memo_h[3000][3000] = {0};

void f2(std::vector<std::string>& s, int y, int x) {
    if (s[y][x] == '#') {
        return;
    }
    if (memo_v[y][x] > 0) {
        return;
    }

    // count vertically
    int cnt = 0;
    int i = 1;
    while (y + i < s.size() && s[y + i][x] != '#') {
        cnt++;
        i++;
    }
    i = 1;
    while (y - i >= 0 && s[y - i][x] != '#') {
        cnt++;
        i++;
    }

    // memoize
    i = 0;
    while (y + i < s.size() && s[y + i][x] != '#') {
        memo_v[y + i][x] = cnt;
        i++;
    }
    i = 0;
    while (y - i >= 0 && s[y - i][x] != '#') {
        memo_v[y - i][x] = cnt;
        i++;
    }    
}

void f3(std::vector<std::string>& s, int y, int x) {
    if (s[y][x] == '#') {
        return;
    }
    if (memo_h[y][x] > 0) {
        return;
    }

    // count horizontally
    int cnt = 0;
    int i = 1;
    while (x + i < s[y].size() && s[y][x + i] != '#') {
        cnt++;
        i++;
    }
    i = 1;
    while (x - i >= 0 && s[y][x - i] != '#') {
        cnt++;
        i++;
    }

    // memoize
    i = 0;
    while (x + i < s[y].size() && s[y][x + i] != '#') {
        memo_h[y][x + i] = cnt;
        i++;
    }
    i = 0;
    while (x - i >= 0 && s[y][x - i] != '#') {
        memo_h[y][x - i] = cnt;
        i++;
    }
}

int f(int h, int w, std::vector<std::string> s) {
    for (int i = 0; i < 3000; i++) {
        for (int j = 0; j < 3000; j++) {
            memo_v[i][j] = 0;
            memo_h[i][j] = 0;
        }
    }
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            f2(s, i, j);
            f3(s, i, j);
        }
    }
    int mx = 0;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < w; j++) {
            if (mx < memo_v[i][j] + memo_h[i][j]) {
                mx = memo_v[i][j] + memo_h[i][j];
            }
        }
    }
    return mx + 1;
}

int main() {

    int h, w;
    std::cin >> h >> w;
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

    std::vector<std::string> s;
    for (int i = 0; i < h; i++) {
        std::string tmp;
        std::getline(std::cin, tmp);
        s.push_back(tmp);
    }

    int result = f(h, w, s);
    std::cout << result << std::endl;

    return 0;
}
