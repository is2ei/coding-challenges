import java.util.*;
import java.lang.*;
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}
class Occurrence
{
    static Node head;
    public static void main (String[] args) {
        Scanner sc= new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            int n = sc.nextInt();
            int a1 = sc.nextInt();
            Node head = new Node(a1);
            addToTheLast(head);
            for(int i = 1; i < n; i++)
            {
                int a = sc.nextInt();
                addToTheLast(new Node(a));
            }
            
            int k = sc.nextInt();
            GfG gfg = new GfG();
            System.out.println(gfg.frequency(head, k));
        }
    }
    
    public static void addToTheLast(Node node)
    {
        if(head == null)
        {
            head = node;
        }
        else
        {
            Node temp = head;
            while(temp.next !=  null)
                temp = temp.next;
                temp.next = node;
        }
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/


/*node class of the linked list
class Node
{
    int data;
    Node next;
    Node(int key)
    {
        data = key;
        next = null;
    }
}*/
// complete the below function
class GfG
{
    public static int frequency(Node node, int search)
    {
        int count = 0;
        Node temp = node;
        
        while(node != null)
        {
            if(node.data == search)
                count++;
                
            node = node.next;
        }
        
        return count;
    }
}
