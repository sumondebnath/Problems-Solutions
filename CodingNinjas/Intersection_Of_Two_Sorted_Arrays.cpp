/*
    Problem Link : https://www.naukri.com/code360/problems/intersection-of-2-arrays_1082149?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
    // Write your code here.
    vector<int> v;
    int i = 0;
    int j = 0;

    while (i < n and j < m)
    {
        if (arr1[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr1[i])
        {
            j++;
        }
        else
        {
            v.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    return v;
}