/*
    Problem Link : https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/description/
*/

class Solution
{
public:
    vector<vector<int>> verticalTraversal(TreeNode *root)
    {
        map<int, map<int, multiset<int>>> mp;
        queue<pair<TreeNode *, pair<int, int>>> q;

        q.push({root, {0, 0}});

        while (!q.empty())
        {
            auto all = q.front();
            q.pop();

            TreeNode *parent = all.first;
            int row = all.second.first;
            int col = all.second.second;

            mp[row][col].insert(parent->val);

            if (parent->left)
            {
                q.push({parent->left, {row - 1, col + 1}});
            }
            if (parent->right)
            {
                q.push({parent->right, {row + 1, col + 1}});
            }
        }

        vector<vector<int>> v;

        for (auto val : mp)
        {
            vector<int> col;
            for (auto data : val.second)
            {
                col.insert(col.end(), data.second.begin(), data.second.end());
            }
            v.push_back(col);
        }

        return v;
    }
};