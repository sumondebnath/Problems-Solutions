/*
    Problem Link : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/description/
*/

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size() - 1;
        int buy_mini = prices[0];
        int profit = 0;

        for (int i = 1; i <= n; i++)
        {
            int sell = prices[i] - buy_mini;
            profit = max(profit, sell);
            buy_mini = min(buy_mini, prices[i]);
        }
        return profit;
    }
};