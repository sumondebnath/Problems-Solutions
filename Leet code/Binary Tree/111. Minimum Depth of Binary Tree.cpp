/*
    https://leetcode.com/problems/minimum-depth-of-binary-tree/description/
*/

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        if(root->left == NULL && root->right == NULL) return 1;
        int left = root->left ? minDepth(root->left) : INT_MAX;
        int right = root->right ? minDepth(root->right) : INT_MAX;

        return min(left, right) + 1;
    }
};