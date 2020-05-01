//https://leetcode.com/problems/binary-tree-tilt/


/**
 * Definition for a binary tree node.
 * public class TreeNode {
 *     int val;
 *     TreeNode left;
 *     TreeNode right;
 *     TreeNode() {}
 *     TreeNode(int val) { this.val = val; }
 *     TreeNode(int val, TreeNode left, TreeNode right) {
 *         this.val = val;
 *         this.left = left;
 *         this.right = right;
 *     }
 * }
 */
public class Solution {
    int res = 0;
    public int findTilt(TreeNode root) {
        postOrder(root);
        return res;
    }
    public int postOrder(TreeNode root){
        if(root == null){
            return 0;
        }
        int left = postOrder(root.left);
        int right = postOrder(root.right);
        res += Math.abs(left - right);
        return left + right + root.val;
    }
}
