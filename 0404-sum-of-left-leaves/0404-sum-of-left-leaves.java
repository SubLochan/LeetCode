class Solution {
    public int sumOfLeftLeaves(TreeNode root) {
        if (root == null) return 0;
        int c = 0;

        
        if (root.left != null) {
            
            if (root.left.left == null && root.left.right == null) {
                c += root.left.val;
            } else {
                c += sumOfLeftLeaves(root.left);
            }
        }

        
        c += sumOfLeftLeaves(root.right);

        return c;
    }
}
