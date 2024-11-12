/*
    Problem Link : https://www.naukri.com/code360/problems/subsequences-of-string_985087?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

void subsequences_recursion(vector<string> &arr, string str, string s, int n)
{
    if (n >= str.length())
    {
        if (!s.empty())
            arr.push_back(s);
        return;
    }

    // exclude
    subsequences_recursion(arr, str, s, n + 1);

    // Include
    s += str[n];
    subsequences_recursion(arr, str, s, n + 1);
}

vector<string> subsequences(string str)
{

    vector<string> arr;
    string s;

    subsequences_recursion(arr, str, s, 0);

    return arr;
}