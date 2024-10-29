/*
    Problem Link : https://leetcode.com/problems/binary-tree-level-order-traversal/description/
*/

class Solution
{
public:
    void LevelOrderTraversal(TreeNode *root, vector<vector<int>> &v)
    {
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            vector<int> arr;
            int n = q.size();

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
            v.push_back(arr);
        }
    }
    vector<vector<int>> levelOrder(TreeNode *root)
    {
        vector<vector<int>> v;
        if (root == NULL)
            return v;

        LevelOrderTraversal(root, v);

        return v;
    }
};