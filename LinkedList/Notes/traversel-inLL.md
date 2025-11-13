# Traversing through a Linked List

``` java
public class LinkedList{
    public static void main(String[] args){
        int[] arr = {12, 5, 6, 8};
        Node head = convertArr2LL(arr); // here we converted arr into linked list

        // Initialize a temp pointer
        Node temp = head; // this pointer will start at the head node

        // traverse the LL until 'temp' becomes null
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next; // move 'temp' to the next node in the list
        }
    }
}
```