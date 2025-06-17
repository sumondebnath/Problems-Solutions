/*
    https://leetcode.com/problems/count-complete-tree-nodes/description/
*/

class Solution {
public:
    int countHeight(TreeNode* root){
        if(root == NULL) return 0;

        int left = countHeight(root->left);
        int right = countHeight(root->right);

        return left + right + 1;
    }
    int countNodes(TreeNode* root) {
        if(root == NULL) return 0;

        int count = countHeight(root);

        return count;
    }
};