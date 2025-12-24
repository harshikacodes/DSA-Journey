# Heaps — Concepts, Heap Sort, Insertion/Deletion & Priority Queue  

## 1. What is a Heap?

A **Heap** is a special **tree-based data structure** that satisfies **two conditions**:

### 1.1 Complete Binary Tree (CBT)
- Every level is completely filled **except possibly the last**
- Nodes in the last level are filled **from left to right**

### 1.2 Heap Order Property
There are two types of heaps:

#### Max-Heap
- Parent value **≥** children values
- **Maximum element is at the root**

#### Min-Heap
- Parent value **≤** children values
- **Minimum element is at the root**

---

## 2. Array Representation of Heap

Heaps are usually implemented using **arrays**.

### 2.1 1-Based Indexing (Common in Theory)
For a node at index `i`:

- Left Child → `2 * i`
- Right Child → `2 * i + 1`
- Parent → `i / 2`

### 2.2 0-Based Indexing (Used in Java)
For a node at index `i`:

- Left Child → `2 * i + 1`
- Right Child → `2 * i + 2`
- Parent → `(i - 1) / 2`

---

## 3. Core Heap Operations

### 3.1 Insertion in Heap

**Steps:**
1. Insert the element at the **end of the array**
2. Compare it with its parent
3. Swap if heap property is violated
4. Repeat until heap property is restored

**Time Complexity:** `O(log N)`

---

### 3.2 Deletion in Heap (Deleting Root)

> Important: In heaps, **deletion usually means deleting the root**, not any random node.

**Steps:**
1. Swap root with the last element
2. Remove the last element
3. Heapify (bubble down) from the root

**Time Complexity:** `O(log N)`

---

### 3.3 Heapify Algorithm

**Purpose:**  
Convert an arbitrary array into a heap efficiently.

**Key Insight:**
- Leaf nodes are already heaps
- Leaf nodes exist from index `(n/2 + 1)` to `n`
- Start heapify from the **last non-leaf node** → `n/2`

**Time Complexity:** `O(N)`  
(Not `O(N log N)` — proven mathematically)

---

## 4. Heap Sort

### Steps:
1. Build a **Max-Heap**
2. Swap root with last element
3. Reduce heap size
4. Heapify root
5. Repeat until sorted

### Complexity:
- **Time:** `O(N log N)`
- **Space:** `O(1)` (in-place)

---

## 5. Important Observations & Common Mistakes

- **Leaf Nodes:**  
  Nodes from `n/2 + 1` to `n` are leaves and don’t need heapify

- **Common Mistake:**  
  Thinking heap deletion removes any element (it removes root)

- **Indexing Alert:**  
  Be careful switching between 1-based and 0-based indexing

---

## 6. Problems Mentioned in the Lecture

### 6.1 Build Heap
**Approach:**  
Call heapify from index `n/2` down to `0`

- **Time:** `O(N)`
- **Space:** `O(log N)` (recursive stack)

---

### 6.2 Heap Sort
**Approach:**  
Build Max-Heap → swap root → heapify → repeat

- **Time:** `O(N log N)`
- **Space:** `O(1)`

---

### 6.3 Min-Heap / Max-Heap using STL (Java Equivalent)

In Java, **PriorityQueue** is used.

---

## 7. Java Implementations

### 7.1 Max-Heap Insertion (Manual Implementation)

```java
class MaxHeap {
    int[] arr;
    int size;

    MaxHeap(int capacity) {
        arr = new int[capacity];
        size = 0;
    }

    void insert(int val) {
        arr[size] = val;
        int index = size;
        size++;

        while (index > 0) {
            int parent = (index - 1) / 2;
            if (arr[parent] < arr[index]) {
                int temp = arr[parent];
                arr[parent] = arr[index];
                arr[index] = temp;
                index = parent;
            } else {
                break;
            }
        }
    }
}
```

### 7.2 Heapify (Max-Heap, Java)
``` java
public static void heapify(int[] arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;

    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        int temp = arr[i];
        arr[i] = arr[largest];
        arr[largest] = temp;

        heapify(arr, n, largest);
    }
}
```

### 7.3 Heap Sort (Java)
``` java
public static void heapSort(int[] arr) {
    int n = arr.length;

    // Build Max Heap
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i);
    }

    // Extract elements
    for (int i = n - 1; i > 0; i--) {
        int temp = arr[0];
        arr[0] = arr[i];
        arr[i] = temp;

        heapify(arr, i, 0);
    }
}
```

### 7.4 Priority Queue in Java (STL Equivalent)

``` java
import java.util.PriorityQueue;

// Min-Heap (Default)
PriorityQueue<Integer> minHeap = new PriorityQueue<>();
minHeap.add(10);

// Max-Heap
PriorityQueue<Integer> maxHeap =
        new PriorityQueue<>((a, b) -> b - a);
maxHeap.add(10);
```

## 8. Summary for Quick Revision

- Heap = Complete Binary Tree + Heap Property

- Max-Heap → max element at root

- Min-Heap → min element at root

- Insert → add at end → bubble up → O(log N)

- Delete → swap root → bubble down → O(log N)

- Heapify → start from n/2 → O(N)

- Heap Sort → O(N log N)

- Java uses PriorityQueue

- Default PQ → Min-Heap