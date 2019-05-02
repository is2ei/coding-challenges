import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static int f(int[][] arr, int y, int x) {
        return arr[y][x] + arr[y][x + 1] + arr[y][x + 2] + arr[y + 1][x + 1] + arr[y+ 2][x] + arr[y + 2][x + 1] + arr[y + 2][x + 2];
    }

    // Complete the hourglassSum function below.
    static int hourglassSum(int[][] arr) {

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

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        int[][] arr = new int[6][6];

        for (int i = 0; i < 6; i++) {
            String[] arrRowItems = scanner.nextLine().split(" ");
            scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

            for (int j = 0; j < 6; j++) {
                int arrItem = Integer.parseInt(arrRowItems[j]);
                arr[i][j] = arrItem;
            }
        }

        int result = hourglassSum(arr);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
