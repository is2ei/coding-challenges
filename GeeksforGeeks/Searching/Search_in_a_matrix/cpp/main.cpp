#include <bits/stdc++.h>

using namespace std;

int f(vector<vector<int>> matrix, int target) {

    int y = 0;
    int x = 0;

    while (y < matrix.size() - 1 && x < matrix[y].size() - 1) {
        if (matrix[y][x] == target || matrix[y + 1][x] == target || matrix[y][x + 1] == target || matrix[y + 1][x + 1] == target) {
            return 1;
        }

        if (matrix[y + 1][x] < matrix[y][x + 1] && matrix[y][x + 1]) {
            if (matrix[y][x + 1] < target) {
                x++;
            } else {
                y++;
            }
        } else {
            if (matrix[y + 1][x] < target) {
                y++;
            } else {
                x++;
            }
        }
    }

    while (y < matrix.size()) {
        if (matrix[y][x] == target) {
            return 1;
        }
        y++;
    }

    while (x < matrix[0].size()) {
        if (matrix[y - 1][x] == target) {
            return 1;
        }
        x++;
    }

    return 0;
}

int main() {

    int t;
    std::cin >> t;

    for (int i = 0; i < t; i++) {

        int n;
        std::cin >> n;

        int m;
        std::cin >> m;

        vector<vector<int>> matrix;
        for (int j = 0; j < n; j++) {
            vector<int> row;
            for (int k = 0; k < m; k++) {
                int tmp;
                std::cin >> tmp;
                row.push_back(tmp);
            }
            matrix.push_back(row);
        }

        int x;
        std::cin >> x;

        int result = f(matrix, x);
        std::cout << result << endl;
    }

    return 0;
}