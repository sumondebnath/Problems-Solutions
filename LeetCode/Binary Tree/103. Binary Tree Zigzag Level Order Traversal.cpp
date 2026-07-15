/*
    Problem LInk : https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/description/
*/

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> v;
        if (root == NULL)
            return v;

        int level = 0;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {

            vector<int> arr;
            int n = q.size();
            level = level + 1;
            for (int i = 0; i < n; i++)
            {
                TreeNode *parent = q.front();
                q.pop();

                arr.push_back(parent->val);

                if (parent->left)
                    q.push(parent->left);
                if (parent->right)
                    q.push(parent->right);
            }
            if (level % 2 == 0)
            {
                reverse(arr.begin(), arr.end());
            }
            v.push_back(arr);
        }
        return v;
    }
};