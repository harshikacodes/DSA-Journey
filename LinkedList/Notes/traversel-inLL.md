# Traversing through Linked List

``` java
public class LinkedList{
    public static void main(String[] args){
        int[] arr = {12, 5, 6, 8};
        Node head = convertArr2LL(arr);

        Node temp = head;
        while(temp != null){
            System.out.print(temp.data + " ");
            temp = temp.next;
        }
    }
}
```