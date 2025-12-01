# Preorder Traversal of Binary Tree (Recursive)

## 1. Core Concept: Preorder Traversal

**Definition:**  
Preorder is a Depth First Search (DFS) traversal where nodes are visited in this order:

1. **Root** — Process the current node  
2. **Left** — Recursively traverse the left subtree  
3. **Right** — Recursively traverse the right subtree  

**Mnemonic:**  
**“Pre” means Root FIRST.**

---

## 2. Recursive Logic & Intuition

For any node `curr`:

1. Visit/Store `curr.data`  
2. Recursively call preorder for `curr.left`  
3. Recursively call preorder for `curr.right`

### Base Case
If `curr == null`, simply **return** (end this branch).

### Key Idea
Treat every node as the **root of its own subtree**, and apply the same Root–Left–Right logic.

---

## 3. Dry Run (Diagram Explained)

Tree used by Striver:
```
      1
    /   \
   2     3
  / \   / \
 4   5 7   8
    /     / \
   6     9  10
```


### Step-by-Step Preorder Execution

- Start at **1** → print **1**  
- Go left → **2** → print **2**  
- Go left → **4** → print **4**  
  - L/R null → return  
- Back to 2 → go right → **5** → print **5**  
- Go left → **6** → print **6**  
- Backtrack: return to 5 → return to 2 → return to 1  
- Go right → **3** → print **3**  
- Go left → **7** → print **7**  
  - return  
- Go right → **8** → print **8**  
- Left → **9** → print **9**  
- Right → **10** → print **10**

### **Final Preorder Output:**
`1, 2, 4, 5, 6, 3, 7, 8, 9, 10`

---

## 4. Important Observations & Key Points

### ✔ Simplicity 
**Do not overthink. Follow 3 lines:**
1. Process Root  
2. Recurse Left  
3. Recurse Right  

### ✔ Recursion Stack Behavior
- When moving left, recursion **pauses** the current node.
- After finishing the left subtree, it **resumes** from where it left off.
- Only after left is fully processed, the right subtree is visited.

### ✔ Auxiliary Space
Depends on tree height:

- Worst case (skewed tree): **O(N)**  
- Balanced tree: **O(log N)**  

---

## 5. Problem Discussed in Lecture

**Task:** Implement recursive preorder traversal.  
**Input:** Root of a binary tree  
**Output:** List of integers in preorder order

### Complexity
- **Time:** O(N) → every node is visited once  
- **Space:** O(H) → recursion stack = height of tree  

---

## 6. Java Code for Recursive Preorder Traversal

```java
// Node class for Binary Tree
class Node {
    int data;
    Node left;
    Node right;

    public Node(int value) {
        this.data = value;
        this.left = null;
        this.right = null;
    }
}

public class PreorderTraversal {

    // Recursive preorder function
    public static void preorder(Node node, List<Integer> result) {
        // Base case
        if (node == null) {
            return;
        }

        // 1. Process Root
        result.add(node.data);

        // 2. Go Left
        preorder(node.left, result);

        // 3. Go Right
        preorder(node.right, result);
    }

    // Helper function to initiate traversal
    public static List<Integer> preorderTraversal(Node root) {
        List<Integer> result = new ArrayList<>();
        preorder(root, result);
        return result;
    }

    public static void main(String[] args) {
        // Constructing the sample tree
        Node root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(3);

        root.left.left = new Node(4);
        root.left.right = new Node(5);

        root.left.right.left = new Node(6);

        root.right.left = new Node(7);
        root.right.right = new Node(8);

        root.right.right.left = new Node(9);
        root.right.right.right = new Node(10);

        // Running preorder traversal
        List<Integer> result = preorderTraversal(root);
        System.out.println(result);
    }
}
