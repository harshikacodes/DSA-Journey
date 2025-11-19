# 🔗 Remove Head of Linked List & Print the List


```java
// method to print the entire linked list
private static void print(Node head) {

    // traverse through the linked list
    while (head != null) {
        // print each node's data
        System.out.print(head.data + " ");

        // Move to the next node
        head = head.next;
    }

    // Print a newline after full list is printed
    System.out.println();
}


// method to remove the head (first node) of the linked list
private static Node removesHead(Node head) {

    // If the list is empty, simply return null
    if (head == null) return head;

    // Move the head pointer to the next node
    head = head.next;

    // Return the new head
    return head;
}


public static void main(String[] args) {

    int[] arr = {12, 5, 6, 8};
    Node head = convertArr2LL(arr);
    head = removesHead(head);
    print(head);
}
```

-> In java there is no need to free up the memory because there is garbage collector is there.