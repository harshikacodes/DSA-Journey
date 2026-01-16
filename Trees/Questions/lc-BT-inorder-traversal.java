import java.util.List;
import java.util.ArrayList;

// Definition for a binary tree node.
class TreeNode {
    int val;
    TreeNode left;
    TreeNode right;

    TreeNode() {
    }

    TreeNode(int val) {
        this.val = val;
    }

    TreeNode(int val, TreeNode left, TreeNode right) {
        this.val = val;
        this.left = left;
        this.right = right;
    }
}

class Solution {

    // Main function 
    public List<Integer> inorderTraversal(TreeNode root) {

        // List to store the inorder traversal result
        List<Integer> ans = new ArrayList<>();

        // Calling the helper function to fill the list
        inorder(root, ans);

        // Return the final result
        return ans;
    }

    // Helper function to perform recursive inorder traversal
    public void inorder(TreeNode root, List<Integer> ans) {

        // Base case: If the current node is null, simply return
        if (root == null)
            return;

        // Step 1: Traverse the left subtree (Left)
        inorder(root.left, ans);

        // Step 2: Process the current node (Root)
        ans.add(root.val);

        // Step 3: Traverse the right subtree (Right)
        inorder(root.right, ans);
    }
}
