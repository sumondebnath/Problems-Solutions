/*
    Problem Link : https://www.naukri.com/code360/problems/longest-substring-without-repeating-characters_630418?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
int uniqueSubstrings(string input)
{
    int maxlen = 0;

    for (int i = 0; i < input.length(); i++)
    {
        vector<int> v(256, 0);
        for (int j = i; j < input.length(); j++)
        {
            if (v[input[j]] == 1)
                break;
            int len = j - i + 1;
            maxlen = max(len, maxlen);
            v[input[j]] = 1;
        }
    }

    return maxlen;
}