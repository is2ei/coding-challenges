 #include <bits/stdc++.h>

using namespace std;

bool check(vector<vector<int>>& matrix, int y, int x) {
    if (y < 0 || x < 0) {
        return false;
    }

    if (y >= matrix.size()) {
        return false;
    }

    if (x >= matrix[0].size()) {
        return false;
    }

    if (matrix[y][x] == 0) {
        return false;
    }

    return true;
}

int memo[1000] = {0};

int countCell(vector<vector<int>>& matrix, int y, int x, int count) {
    
    if (matrix[y][x] == 0) {
        return 0;
    }

//    cout << "countCell() y: " << y << ", x: " << x << ", count: " << count << endl;

    matrix[y][x] = 0;

    count++;

    if (check(matrix, y + 1, x) == true) {
        int tmp = countCell(matrix, y + 1, x, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y - 1, x) == true) {
        int tmp = countCell(matrix, y - 1, x, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y, x + 1) == true) {
        int tmp = countCell(matrix, y, x + 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y, x - 1) == true) {
        int tmp = countCell(matrix, y, x - 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y + 1, x + 1) == true) {
        int tmp = countCell(matrix, y + 1, x + 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y - 1, x + 1) == true) {
        int tmp = countCell(matrix, y - 1, x + 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y + 1, x - 1) == true) {
        int tmp = countCell(matrix, y + 1, x - 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    if (check(matrix, y - 1, x - 1) == true) {
        int tmp = countCell(matrix, y - 1, x - 1, count);
        if (count < tmp) {
            count = tmp;
        }
    }

    return count;
}

// Complete the connectedCell function below.
int connectedCell(vector<vector<int>> matrix) {

    int result = 0;
    for (int i = 0; i < matrix.size(); i++) {
        for (int j = 0; j < matrix[i].size(); j++) {
            int tmp = countCell(matrix, i, j, 0);
            if (result < tmp) {
                result = tmp;
            }
        }
    }

    return result;
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

    vector<vector<int>> matrix(n);
    for (int i = 0; i < n; i++) {
        matrix[i].resize(m);

        for (int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = connectedCell(matrix);

    fout << result << "\n";

    fout.close();

    return 0;
}
