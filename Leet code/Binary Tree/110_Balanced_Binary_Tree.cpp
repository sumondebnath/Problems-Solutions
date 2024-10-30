/*
    Problem Link : https://leetcode.com/problems/balanced-binary-tree/description/
*/

class Solution
{
public:
    int CalculateHeight(TreeNode *root)
    {
        if (root == NULL)
            return 0;

        int leftSide = CalculateHeight(root->left);
        if (leftSide == -1)
            return -1;

        int rightSide = CalculateHeight(root->right);
        if (rightSide == -1)
            return -1;

        if (abs(leftSide - rightSide) > 1)
            return -1;

        return max(leftSide, rightSide) + 1;
    }
    bool isBalanced(TreeNode *root)
    {
        return CalculateHeight(root) != -1;
    }
};