import java.io.*;
import java.math.*;
import java.security.*;
import java.text.*;
import java.util.*;
import java.util.concurrent.*;
import java.util.regex.*;

public class Solution {

    public static String f(int N) {
        if ((N & 1) > 0 || (N >= 6 && N <= 20)) {
            return "Weird";
        }
        return "Not Weird";
    }

    private static final Scanner scanner = new Scanner(System.in);

    public static void main(String[] args) {
        int N = scanner.nextInt();
        scanner.skip("(\r\n|[\n\r\u2028\u2029\u0085])?");

        String res = f(N);
        System.out.println(res);

        scanner.close();
    }
}
