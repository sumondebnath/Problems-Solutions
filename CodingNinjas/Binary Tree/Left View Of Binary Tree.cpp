/*
    Problem Link : https://www.naukri.com/code360/problems/left-view-of-binary-tree_625707?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> printLeftView(BinaryTreeNode<int> *root)
{
    vector<int> v;
    if (root == NULL)
        return v;

    queue<BinaryTreeNode<int> *> q;
    q.push(root);

    while (!q.empty())
    {
        int n = q.size();
        vector<int> arr;

        for (int i = 0; i < n; i++)
        {
            BinaryTreeNode<int> *parent = q.front();
            q.pop();

            arr.push_back(parent->data);

            if (parent->left)
                q.push(parent->left);
            if (parent->right)
                q.push(parent->right);
        }
        v.push_back(arr[0]);
    }

    return v;
}