// binary-tree-preorder-traversal
// Given the root of a binary tree, return the preorder traversal of its nodes' values.

import java.util.List;
import java.util.ArrayList;

//  Definition for a binary tree node.
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
    public List<Integer> preorderTraversal(TreeNode root) {

        // Create a list to store the preorder traversal
        List<Integer> ans = new ArrayList<>();

        // Call the helper function to fill the list
        preorder(root, ans);

        // Return the final result
        return ans;
    }

    // Helper method to perform recursive preorder traversal
    public void preorder(TreeNode root, List<Integer> ans) {

        // Base case
        // if node is null
        if (root == null)
            return;

        // Step 1: Process the root node (Preorder = Root → Left → Right)
        ans.add(root.val);

        // Step 2: Recursively traverse the left subtree
        preorder(root.left, ans);

        // Step 3: Recursively traverse the right subtree
        preorder(root.right, ans);
    }
}
