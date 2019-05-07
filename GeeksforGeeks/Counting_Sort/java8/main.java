import java.util.*;
import java.lang.*;
class CountSort
{
    public static void main (String[] args) {
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            long n = sc.nextLong();
            char seq[] = new char[(int)n+1];
            String str = "";
            str = sc.next();
            seq = str.toCharArray();
            GfG gfg = new GfG();
                gfg.countSort(seq);
            System.out.println(seq);
        }
    }
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

class GfG
{
    public static void countSort(char seq[])
    {
        int[] count = new int[200];
        for (int i = 0; i < seq.length; i++) {
            int n = seq[i];
            count[n]++;
        }
        
        int idx = 0;
        for (int i = 97; i <= 122; i++) {
            for (int j = 0; j < count[i]; j++) {
                char c = (char)i;
                seq[idx] = c;
                idx++;
            }
        }
    }
}
