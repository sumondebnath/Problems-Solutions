/*
    Problem Link: https://leetcode.com/problems/minimum-insertion-steps-to-make-a-string-palindrome/description/
*/

class Solution
{
public:
    int minInsertions(string s)
    {
        string t = s;
        reverse(t.begin(), t.end());

        int n = s.size();
        int m = t.size();

        int dp[n + 1][m + 1];

        for (int i = 0; i <= n; i++)
        {
            for (int j = 0; j <= m; j++)
            {
                if (i == 0 || j == 0)
                {
                    dp[i][j] = 0;
                }
            }
        }

        for (int i = 1; i <= n; i++)
        {
            for (int j = 1; j <= m; j++)
            {
                if (s[i - 1] == t[j - 1])
                {
                    dp[i][j] = dp[i - 1][j - 1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
                }
            }
        }

        return s.size() - dp[n][m];
    }
};