import java.io.*;
import java.util.*;

public class Solution {

    public static void main(String[] args) {
        int x = 1;
        Scanner in = new Scanner(System.in);
        while (in.hasNext()) {
            String s = in.nextLine();
            System.out.println(x + " " + s);
            x++;
        }
        in.close();
    }
}
