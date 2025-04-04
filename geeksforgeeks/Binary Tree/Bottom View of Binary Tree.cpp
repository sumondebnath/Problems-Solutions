/*
    Problem Link : https://www.geeksforgeeks.org/problems/bottom-view-of-binary-tree/1
*/

class Solution
{
public:
    vector<int> bottomView(Node *root)
    {
        vector<int> v;
        if (root == NULL)
            return v;

        map<int, int> mp;
        queue<pair<Node *, int>> q;
        q.push({root, 0});

        while (!q.empty())
        {
            auto all = q.front();
            q.pop();

            Node *parent = all.first;
            int col = all.second;

            if (mp.find(col) == mp.end())
            {
                mp[col] = parent->data;
            }
            else
            {
                mp[col] = parent->data;
            }

            if (parent->left)
                q.push({parent->left, col - 1});
            if (parent->right)
                q.push({parent->right, col + 1});
        }

        for (auto it : mp)
        {
            v.push_back(it.second);
        }

        return v;
    }
};