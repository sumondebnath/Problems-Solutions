/*
    Problem Link : https://leetcode.com/problems/same-tree/description/
*/

class Solution
{
public:
    bool isSameTree(TreeNode *p, TreeNode *q)
    {
        if (p == NULL or q == NULL)
            return p == q;

        if (p->val == q->val)
            return isSameTree(p->left, q->left) and isSameTree(p->right, q->right);

        return left == right;
    }
};