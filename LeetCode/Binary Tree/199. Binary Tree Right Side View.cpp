/*
    Problem Link : https://leetcode.com/problems/binary-tree-right-side-view/description/
*/

class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> v;
        if (root == NULL)
            return v;
        queue<TreeNode *> q;
        q.push(root);

        while (!q.empty())
        {
            int n = q.size();
            vector<int> arr;

            for (int i = 0; i < n; i++)
            {
                TreeNode *parent = q.front();
                q.pop();

                arr.push_back(parent->val);

                if (parent->right)
                    q.push(parent->right);
                if (parent->left)
                    q.push(parent->left);
            }
            v.push_back(arr[0]);
        }

        return v;
    }
};

// other Optimize approch.

class Solution
{
public:
    void RightSide(TreeNode *root, int level, vector<int> &v)
    {
        if (root == NULL)
            return;
        if (v.size() == level)
        {
            v.push_back(root->val);
        }
        RightSide(root->right, level + 1, v);
        RightSide(root->left, level + 1, v);
    }
    vector<int> rightSideView(TreeNode *root)
    {
        vector<int> v;

        RightSide(root, 0, v);

        return v;
    }
};