import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    static BigInteger f(BigInteger t1, BigInteger t2, int n, int count) {
        if (count + 1 == n) {
            return t1;
        }

        BigInteger t3 = t1.add(t2.multiply(t2));
        return f(t2, t3, n, count + 1);
    }

    // Complete the fibonacciModified function below.
    static BigInteger fibonacciModified(int t1, int t2, int n) {
        BigInteger bigT1 = new BigInteger(String.valueOf(t1));
        BigInteger bigT2 = new BigInteger(String.valueOf(t2));

        return f(bigT1, bigT2, n, 0);
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) throws IOException {
        BufferedWriter bufferedWriter = new BufferedWriter(new FileWriter(System.getenv("OUTPUT_PATH")));

        String[] t1T2n = scanner.nextLine().split(" ");

        int t1 = Integer.parseInt(t1T2n[0]);

        int t2 = Integer.parseInt(t1T2n[1]);

        int n = Integer.parseInt(t1T2n[2]);

        BigInteger result = fibonacciModified(t1, t2, n);

        bufferedWriter.write(String.valueOf(result));
        bufferedWriter.newLine();

        bufferedWriter.close();

        scanner.close();
    }
}
