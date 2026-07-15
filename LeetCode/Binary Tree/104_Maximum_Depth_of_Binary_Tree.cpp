/*
    Problem Link : https://leetcode.com/problems/maximum-depth-of-binary-tree/description/
*/

class Solution
{
public:
    int maxDepth(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftNode = maxDepth(root->left) + 1;
        int rightNode = maxDepth(root->right) + 1;

        return max(leftNode, rightNode);
    }
};