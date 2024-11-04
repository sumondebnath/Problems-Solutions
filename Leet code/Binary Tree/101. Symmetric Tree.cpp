/*
    Problem LInk : https://leetcode.com/problems/symmetric-tree/description/
*/

class Solution
{
public:
    bool SymmetricOrNot(TreeNode *left, TreeNode *right)
    {
        if (left == NULL or right == NULL)
            return left == right;
        if (left->val != right->val)
            return false;

        return SymmetricOrNot(left->left, right->right) and SymmetricOrNot(left->right, right->left);
    }
    bool isSymmetric(TreeNode *root)
    {
        return root == NULL or SymmetricOrNot(root->left, root->right);
    }
};