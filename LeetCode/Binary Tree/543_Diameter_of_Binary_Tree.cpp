/*
    Problem Link : https://leetcode.com/problems/diameter-of-binary-tree/description/
*/

class Solution
{
public:
    int MaxOfHeight(TreeNode *root, int &mx)
    {
        if (root == NULL)
            return 0;
        int left = MaxOfHeight(root->left, mx);
        int right = MaxOfHeight(root->right, mx);
        int diameter = left + right;
        mx = max(mx, diameter);
        return max(left, right) + 1;
    }
    int diameterOfBinaryTree(TreeNode *root)
    {
        int maxi = 0;
        MaxOfHeight(root, maxi);

        return maxi;
    }
};