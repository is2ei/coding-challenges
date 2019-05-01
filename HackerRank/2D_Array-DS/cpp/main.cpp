#include <bits/stdc++.h>

using namespace std;

int f(vector<vector<int>>& arr, int y, int x) {
    return arr[y][x] + arr[y][x + 1] + arr[y][x + 2] + arr[y + 1][x + 1] + arr[y + 2][x] + arr[y + 2][x + 1] + arr[y + 2][x + 2];
}

int hourglassSum(vector<vector<int>> arr) {
    int max_sum = f(arr, 0, 0);

    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int sum = f(arr, i, j);
            if (max_sum < sum) {
                max_sum = sum;
            }
        }
    }

    return max_sum;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int result = hourglassSum(arr);

    fout << result << "\n";

    fout.close();

    return 0;
}
