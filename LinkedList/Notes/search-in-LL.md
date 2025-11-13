# 5. Search in Linked List

``` java
public class LinkedList{
    private static int checkIfPresent(Node head, int val){
        Node temp = head;

        // traverse until the end of list
        while(temp != null){

            // check if current node contains the value
            if(temp.data == val){
                return 1;
            }

            // move to the next node
            temp = temp.next;
        }
        return 0;
    }
}
```
<pre>
TC: O(n) -> in worst case 
    O(1) -> if finding ele is head 
    O(n/2) -> if ele is in between somewhere
</pre>

