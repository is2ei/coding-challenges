#include <bits/stdc++.h>

using namespace std;

int f2(vector<vector<int>> arr, int y, int x) {
    return arr[y - 1][x - 1] + arr[y - 1][x] + arr[y - 1][x + 1] + arr[y][x] + arr[y + 1][x - 1] + arr[y + 1][x] + arr[y + 1][x + 1];
}

int f(vector<vector<int>> arr) {
    int max = f2(arr, 1, 1);
    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= 4; j++) {
            int n = f2(arr, i, j);
            if (max < n) {
                max = n;
            }
        }
    }
    return max;
}

int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = f(arr);
    cout << result << endl;

    return 0;
}
