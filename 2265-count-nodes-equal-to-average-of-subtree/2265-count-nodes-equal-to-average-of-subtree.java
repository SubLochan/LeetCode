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
class Solution {
    int c = 0;
    public int averageOfSubtree(TreeNode root) {
        fun(root);
        return c;
    }

    private int[] fun(TreeNode root){
        if(root == null){
            return new int[]{0,0};
        }
        int[] left = fun(root.left);
        int[] right = fun(root.right);

        int sum = left[0] + right[0] + root.val;
        int n = left[1] + right[1] + 1;

        if(root.val == sum / n){
            c++;
        }
        return new int[]{sum,n};
    }
}