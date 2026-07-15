/*
    https://leetcode.com/problems/lexicographical-numbers/description/
*/

class Solution
{
public:
    void dfs(int curr, int &n, vector<int> &v)
    {
        if (curr > n)
            return;
        v.push_back(curr);
        for (int i = 0; i <= 9; i++)
        {
            dfs(curr * 10 + i, n, v);
        }
    }
    vector<int> lexicalOrder(int n)
    {
        vector<int> v;
        for (int i = 1; i <= 9; i++)
        {
            dfs(i, n, v);
        }

        return v;
    }
};