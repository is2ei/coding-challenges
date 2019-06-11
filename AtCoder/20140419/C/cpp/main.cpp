#include <iostream>
#include <vector>
#include <queue>

int f(int R, int C, std::vector<std::vector<char> > c, int sy, int sx, int gy, int gx) {

    std::queue<std::pair<int, int> > q;
    std::pair<int, int> p;
    p.first = sy - 1;
    p.second = sx - 1;
    q.push(p);

    bool checked[100][100] = {0};

    std::queue<std::pair<int, int> > q2;
    int res = 0;
    while (!q.empty()) {
        std::pair<int, int> p = q.front();
        q.pop();

        if (p.first == gy - 1 && p.second == gx - 1) {
            return res;
        }

        c[p.first][p.second] = res + '0';

        if (p.first > 0 && c[p.first - 1][p.second] == '.' && checked[p.first - 1][p.second] == false) {
            std::pair<int, int> p2;
            p2.first = p.first - 1;
            p2.second = p.second;
            q2.push(p2);
            checked[p2.first][p2.second] = true;
        }

        if (p.first < R - 1 && c[p.first + 1][p.second] == '.' && checked[p.first + 1][p.second] == false) {
            std::pair<int, int> p2;
            p2.first = p.first + 1;
            p2.second = p.second;
            q2.push(p2);
            checked[p2.first][p2.second] = true;
        }

        if (p.second > 0 && c[p.first][p.second - 1] == '.' && checked[p.first][p.second - 1] == false) {
            std::pair<int, int> p2;
            p2.first = p.first;
            p2.second = p.second - 1;
            q2.push(p2);
            checked[p2.first][p2.second] = true;
        }

        if (p.second < C - 1 && c[p.first][p.second + 1] == '.' && checked[p.first][p.second + 1] == false) {
            std::pair<int, int> p2;
            p2.first = p.first;
            p2.second = p.second + 1;
            q2.push(p2);
            checked[p2.first][p2.second] = true;
        }

        if (q.empty()) {
            res++;
            while (!q2.empty()) {
                q.push(q2.front());
                q2.pop();
            }
        }
    }

    return -1;
}

int main() {

    int R,C;
    std::cin >> R >> C;

    int sy, sx;
    std::cin >> sy >> sx;

    int gy, gx;
    std::cin >> gy >> gx;

    std::vector<std::vector<char> > c;
    for (int i = 0; i < R; i++) {
        std::vector<char> v;
        for (int j = 0; j < C; j++) {
            char tmp;
            std::cin >> tmp;
            v.push_back(tmp);
        }
        c.push_back(v);
    }

    int result = f(R, C, c, sy, sx, gy, gx);
    std::cout << result << std::endl;

    return 0;
}
