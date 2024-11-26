/*
    https://www.geeksforgeeks.org/problems/number-of-coins1824/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution
{

public:
    int minCoins(vector<int> &coins, int sum)
    {
        int n = coins.size();
        vector<int> dp(sum + 1, sum + 1);
        dp[0] = 0;

        for (int i = 1; i <= sum; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (coins[j] <= i)
                {
                    dp[i] = min(dp[i], 1 + dp[i - coins[j]]);
                }
            }
        }

        return dp[sum] > sum ? -1 : dp[sum];
    }
};