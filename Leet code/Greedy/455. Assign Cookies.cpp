/*
    https://leetcode.com/problems/assign-cookies/description/
*/

class Solution
{
public:
    int findContentChildren(vector<int> &g, vector<int> &s)
    {
        int n = g.size();
        int m = s.size();
        int i = 0, j = 0;
        int count = 0;

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        while (i < n && j < m)
        {
            if (g[i] <= s[j])
            {
                count++;
                i++;
                j++;
            }
            else
                j++;
        }

        return count;
    }
};