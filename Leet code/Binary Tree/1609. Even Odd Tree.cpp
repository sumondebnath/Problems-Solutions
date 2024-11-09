/*
    Problem Link : https://leetcode.com/problems/even-odd-tree/description/
*/

class Solution
{
public:
    bool isEvenOddTree(TreeNode *root)
    {
        queue<TreeNode *> q;
        int level = 0;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            int prev_val = level % 2 == 0 ? INT_MIN : INT_MAX;
            for (int i = 0; i < n; i++)
            {

                TreeNode *parent = q.front();
                q.pop();

                if (level % 2 == 0 && (parent->val % 2 == 0 || parent->val <= prev_val))
                {
                    return false;
                }
                if (level % 2 == 1 && (parent->val % 2 == 1 || parent->val >= prev_val))
                {
                    return false;
                }

                prev_val = parent->val;

                if (parent->left)
                    q.push(parent->left);
                if (parent->right)
                    q.push(parent->right);
            }
            level++;
        }
        return true;
    }
};