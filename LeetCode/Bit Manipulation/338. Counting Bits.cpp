/*
    Problem Link : https://leetcode.com/problems/counting-bits/description/
*/

class Solution
{
public:
    vector<int> countBits(int n)
    {
        vector<int> v;
        v.push_back(0);
        for (int i = 1; i <= n; i++)
        {
            v.push_back(v[i / 2] + i % 2);
        }

        return v;
    }
};