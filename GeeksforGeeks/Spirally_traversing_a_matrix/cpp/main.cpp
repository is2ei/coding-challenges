#include <bits/stdc++.h>

using namespace std;

void right(vector<vector<int>>& matrix, int y, int x, vector<int>& result);
void left(vector<vector<int>>& matrix, int y, int x, vector<int>& result);
void up(vector<vector<int>>& matrix, int y, int x, vector<int>& result);
void down(vector<vector<int>>& matrix, int y, int x, vector<int>& result);

void up(vector<vector<int>>& matrix, int y, int x, vector<int>& result) {

    while (y >= 0 && matrix[y][x] != -1) {
        result.push_back(matrix[y][x]);
        matrix[y][x] = -1;
        y--;
    }

    if (matrix[y + 1][x + 1] == -1) {
        return;
    }

    right(matrix, y + 1, x + 1, result);
}

void left(vector<vector<int>>& matrix, int y, int x, vector<int>& result) {

    while (x >= 0 && matrix[y][x] != -1) {
        result.push_back(matrix[y][x]);
        matrix[y][x] = -1;
        x--;
    }

    if (matrix[y - 1][x + 1] == -1) {
        return;
    }

    up(matrix, y - 1, x + 1, result);
}

void down(vector<vector<int>>& matrix, int y, int x, vector<int>& result) {

    while (y < matrix.size() && matrix[y][x] != -1) {
        result.push_back(matrix[y][x]);
        matrix[y][x] = -1;
        y++;
    }

    if (matrix[y - 1][x - 1] == -1) {
        return;
    }

    left(matrix, y - 1, x - 1, result);
}

void right(vector<vector<int>>& matrix, int y, int x, vector<int>& result) {

    while (x < matrix[y].size() && matrix[y][x] != -1) {
        result.push_back(matrix[y][x]);
        matrix[y][x] = -1;
        x++;
    }

    if (matrix[y + 1][x - 1] == -1) {
        return;
    }

    down(matrix, y + 1, x - 1, result);
}


vector<int> f(vector<vector<int>> matrix) {

    vector<int> result;

    right(matrix, 0, 0, result);

    return result;

}

int main() {

    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {

        int m;
        cin >> m;

        int n;
        cin >> n;

        vector<vector<int>> matrix;
        for (int j = 0; j < m; j++) {
            vector<int> row;
            for (int k = 0; k < n; k++) {
                int tmp;
                cin >> tmp;
                row.push_back(tmp);
            }
            matrix.push_back(row);
        }

        vector<int> result = f(matrix);
        if (!result.empty()) {
            for (int j = 0; j < result.size() - 1; j++) {
                cout << result[j] << " ";
            }
            cout << result[result.size() - 1] << endl;
        }

    }

    return 0;
}