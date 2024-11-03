/*
    Problem Link : https://www.naukri.com/code360/problems/vertical-order-traversal_3622711?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> verticalOrderTraversal(TreeNode<int> *root)
{
    map<int, map<int, multiset<int>>> mp;
    queue<pair<TreeNode<int> *, pair<int, int>>> q;

    q.push({root, {0, 0}});

    while (!q.empty())
    {
        auto all = q.front();
        q.pop();

        TreeNode<int> *parent = all.first;
        int row = all.second.first;
        int col = all.second.second;

        mp[row][col].insert(parent->data);

        if (parent->left)
        {
            q.push({parent->left, {row - 1, col + 1}});
        }
        if (parent->right)
        {
            q.push({parent->right, {row + 1, col + 1}});
        }
    }

    vector<int> v;

    for (auto val : mp)
    {
        for (auto data : val.second)
        {
            v.insert(v.end(), data.second.begin(), data.second.end());
        }
    }

    return v;
}