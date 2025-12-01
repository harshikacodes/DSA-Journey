import java.util.List;
import java.util.ArrayList;

class Solution {

    public List<Integer> postorderTraversal(TreeNode root) {

        List<Integer> ans = new ArrayList<>();
        postorder(root, ans);
        return ans;
    }

    public void postorder(TreeNode root, List<Integer> ans) {

        if (root == null) return;

        // traverse left subtree
        postorder(root.left, ans);

        // traverse right subtree
        postorder(root.right, ans);

        // process current node (visit root)
        // Postorder = Left → Right → Root
        ans.add(root.val);
    }
}

