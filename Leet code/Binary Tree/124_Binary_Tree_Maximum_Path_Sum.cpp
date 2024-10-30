/*
    Problem Link : https://leetcode.com/problems/binary-tree-maximum-path-sum/description/
*/

class Solution
{
public:
    int Sumations(TreeNode *root, int &sum)
    {
        if (root == NULL)
            return 0;

        int left = max(0, Sumations(root->left, sum));

        int right = max(0, Sumations(root->right, sum));

        sum = max(sum, left + right + root->val);

        return max(left, right) + root->val;
    }
    int maxPathSum(TreeNode *root)
    {
        int sum = INT_MIN;

        Sumations(root, sum);

        return sum;
    }
};