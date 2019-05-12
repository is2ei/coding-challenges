import java.util.*;
class Node
    {
        int data;
        Node next;
        Node(int d)
        { 
                data = d; 
                next = null;
            }
    }
public class FindMiddle
{
    Node head;  // head of list
    
    
        public void addToTheLast(Node node) {
    if (head == null) {
    head = node;
    } else {
    Node temp = head;
    while (temp.next != null)
    temp = temp.next;
    temp.next = node;
    }
    }
        
        /* Driver program to test above functions */
    public static void main(String args[])
    {
        
            
        /* Constructed Linked List is 1->2->3->4->5->6->
            7->8->8->9->null */
            Scanner sc = new Scanner(System.in);
            int t=sc.nextInt();
            
            while(t>0)
            {
            int n = sc.nextInt();
            FindMiddle llist = new FindMiddle();
            //int n=Integer.parseInt(br.readLine());
            int a1=sc.nextInt();
            Node head= new Node(a1);
            llist.addToTheLast(head);
            for (int i = 1; i < n; i++) 
            {
                int a = sc.nextInt(); 
                llist.addToTheLast(new Node(a));
            }
            
        GFG gfgobj = new GFG(); 
        //llist.head = new GFG().Middle(llist.head);
        System.out.println(gfgobj.getMiddle(llist.head));
        
        //llist.printList();
        
            t--;
        }
    }
}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* Node of a linked list
    class Node {
    int data;
    Node next;
    Node(int d)  { data = d;  next = null; }
}
    Linked List class
class LinkedList
{
    Node head;  // head of list
}
This is method only submission.  You only need to complete the method. */
class GFG
{
    // Function to find middle element a linked list
    int getMiddle(Node head)
    {
        if (head == null) {
            return -1;
        }
        
        if (head.next == null) {
            return head.data;
        }
        
        Node first = head;
        Node second = head;
        
        while (second != null && second.next != null) {
            first = first.next;
            second = second.next.next;
        }
        return first.data;
    }
}
