/*
    Problem Link : https://www.naukri.com/code360/problems/top-view-of-binary-tree_799401?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

/*
        Some Statement: 

        mp.find(col) == mp.end():
            This condition checks if the key col is not present in the map.
            If the key is not found, the condition is true.
*/


#include <bits/stdc++.h>
using namespace std;

vector<int> getTopView(TreeNode<int> *root)
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