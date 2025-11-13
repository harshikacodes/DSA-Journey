# 2. Convert Array to Linked List

```java
class Node{
    int data;
    Node next;

    Node(int data){
        this.data = data;
        this.next = null;
    }
}

// Main class
public class LinkedList{

    // method to convert an arr into linked-list
    private static Node convertArr2LL(int[] arr){
        // STEP 1: create the first node (head) using first ele of the arr
        Node head = new Node(arr[0]); 

        // 'mover' will keep track of last node we created
        Node mover = head;

        // STEP 2: iterate through the remaining arr ele
        for(int i=1; i<arr.length; i++){
            // create a new node for each ele
            Node temp = new Node(arr[i]);

            // link the prev node's 'next' to this new node
            mover.next = temp;

            // move the 'mover' pointer forward to the new node
            mover = temp;
        }

        // STEP 3: return the head node (start of the LL)
        return head;
    }

    public static void main(String[] args){
        int[] arr = {12, 5, 6, 8};
        Node head = convertArr2LL(arr);
        System.out.print(head.data);
    }
}
```

Time complexity is O(n) - simple traversing