/*
    Problem Link : https://www.naukri.com/code360/problems/longest-substring-without-repeating-characters_758894?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
int lengthOfLongestSubstring(string &s)
{
    int maxlen = 0;

    for (int i = 0; i < s.length(); i++)
    {
        vector<int> v(256, 0);
        for (int j = i; j < s.length(); j++)
        {
            if (v[s[j]] == 1)
                break;
            int len = j - i + 1;
            maxlen = max(len, maxlen);
            v[s[j]] = 1;
        }
    }

    return maxlen;
}