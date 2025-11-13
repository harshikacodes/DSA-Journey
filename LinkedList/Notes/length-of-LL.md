# 4. Length of a Linked List

``` java
public class LinkedList{
    // method to count the num of nodes in the LL
    private static int lengthLL(Node head){
        int cnt = 0; // counter to keep track of nodes
        Node temp = head; // start from head node

        // traverse through the LL
        while(temp != null){
            cnt++; // increment counter for each node
            temp = temp.next; // move to the next node
        }
        return cnt;
    }

    public static void main(String[] args){
        int[] arr = {12, 5, 6, 8};
        Node head = convertArr2LL(arr);
        int c = lengthLL(head);
        System.out.println(c);
    }
}
```

TC: O(n)