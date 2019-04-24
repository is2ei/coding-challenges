#include <bits/stdc++.h>

using namespace std;

bool checked[100][100] = {0};
int counts[100][100] = {0};
vector<int> sum;


bool f2(vector<vector<int>>& grid, int y, int x) {
    return y >= 0 && y < grid.size() && x >= 0 && x < grid[0].size() && checked[y][x] == false && grid[y][x] == 1;
}

void f(vector<vector<int>>& grid, int y, int x, int& count) {

    if (checked[y][x] == true) {
        return;
    }

    checked[y][x] = true;

    if (grid[y][x] == 0) {
        return;
    }

    counts[y][x] = count;

    count++;

    // vertical
    if (f2(grid, y - 1, x) == true) {
        f(grid, y - 1, x, count);
    }
    if (f2(grid, y + 1, x) == true) {
        f(grid, y + 1, x, count);
    }

    // horizontal
    if (f2(grid, y, x + 1) == true) {
        f(grid, y, x + 1, count);
    }
    if (f2(grid, y, x - 1) == true) {
        f(grid, y, x - 1, count);
    }
    
    // diagonal
    if (f2(grid, y + 1, x + 1) == true) {
        f(grid, y + 1, x + 1, count);
    }
    if (f2(grid, y - 1, x + 1) == true) {
        f(grid, y - 1, x + 1, count);
    }
    if (f2(grid, y + 1, x - 1) == true) {
        f(grid, y + 1, x - 1, count);
    }
    if (f2(grid, y - 1, x - 1) == true) {
        f(grid, y - 1, x - 1, count);
    }


}

// Complete the maxRegion function below.
int maxRegion(vector<vector<int>> grid) {

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[i].size(); j++) {
            if (grid[i][j] == 1) {
                int count = 1;
                f(grid, i, j, count);
            }
        }
    }

    int max = 0;
    for (int i = 0; i < 25; i++) {
        for (int j = 0; j < 25; j++) {
            if (max < counts[i][j]) {
                max = counts[i][j];
            }
        }
    }
    return max;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int m;
    cin >> m;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    vector<vector<int>> grid(n);
    for (int i = 0; i < n; i++) {
        grid[i].resize(m);

        for (int j = 0; j < m; j++) {
            cin >> grid[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int res = maxRegion(grid);

    fout << res << "\n";

    fout.close();

    return 0;
}
