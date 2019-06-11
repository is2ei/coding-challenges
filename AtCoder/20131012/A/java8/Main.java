import java.util.*;

public class Main {

    static int f(int h1, int h2) {
        return h1 - h2;
    }
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int h1 = sc.nextInt();
        int h2 = sc.nextInt();
        int result = f(h1, h2);
        System.out.println(result);
        sc.close();
    }
}
