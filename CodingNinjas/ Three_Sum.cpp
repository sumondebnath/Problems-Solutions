/*
    Problem link : https://www.naukri.com/code360/problems/three-sum_6922132?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
vector<vector<int>> triplet(int n, vector<int> &arr)
{
    set<vector<int>> st;

    for (int i = 0; i < n; i++)
    {
        set<int> hash;
        for (int j = i + 1; j < n; j++)
        {
            int k = -(arr[i] + arr[j]);
            if (hash.find(k) != hash.end())
            {
                vector<int> temp = {arr[i], arr[j], k};
                sort(temp.begin(), temp.end());
                st.insert(temp);
            }
            hash.insert(arr[j]);
        }
    }

    vector<vector<int>> v(st.begin(), st.end());

    return v;
}