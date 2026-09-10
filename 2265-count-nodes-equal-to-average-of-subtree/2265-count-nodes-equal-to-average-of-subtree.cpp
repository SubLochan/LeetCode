/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int c = 0;
    int averageOfSubtree(TreeNode* root) {
        fun(root);
        return c;
    }

private:
    pair<int,int> fun(TreeNode* root){
        if(root == NULL){
            return {0,0};
        }
        pair<int,int> left = fun(root -> left);
        pair<int,int> right = fun(root -> right);

        int sum = left.first + right.first + root ->val;
        int n = left.second + right.second + 1;

        if(root -> val == sum / n){
            c++;
        }
        return {sum,n};
    }
};