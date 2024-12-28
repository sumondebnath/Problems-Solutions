/*
    https://www.geeksforgeeks.org/problems/buy-stock-2/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution
{
public:
    int maximumProfit(vector<int> &prices)
    {
        int mini = prices[0];
        int profit = 0;

        for (int i = 1; i < prices.size(); i++)
        {
            profit = max(profit, prices[i] - mini);
            mini = min(mini, prices[i]);
        }

        return profit;
    }
};