/*
    Problem Link : https://www.naukri.com/code360/problems/bottom-view-of-binary-tree_893110?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> bottomView(TreeNode<int> *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    map<int, int> mp;
    queue<pair<TreeNode<int> *, int>> q;
    q.push({root, 0});

    while (!q.empty())
    {
        auto all = q.front();
        q.pop();

        TreeNode<int> *parent = all.first;
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