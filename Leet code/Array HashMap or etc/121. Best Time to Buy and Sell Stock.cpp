/*
    https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size() - 1;
        int mini = prices[0];
        int profit = 0;

        for (int i = 1; i <= n; i++)
        {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }

        return profit;
    }
};