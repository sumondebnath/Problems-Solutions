/*
    Problem Link : https://www.naukri.com/code360/problems/occurs-once_1214969?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
int occursOnce(vector<int> &a, int n)
{
    int x_or = 0;

    for (int i = 0; i < n; i++)
    {
        x_or ^= a[i];
    }

    return x_or;
}