/*
    Problem Link : https://www.naukri.com/code360/problems/stocks-are-profitable_893405?source=youtube&campaign=striver_dp_videos&utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_dp_videos&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
int maximumProfit(vector<int> &prices)
{
    // Write your code here.

    int mini = prices[0];
    int profit = 0;

    for (int i = 1; i < prices.size(); i++)
    {
        int sell = prices[i] - mini;
        profit = max(profit, sell);
        mini = min(mini, prices[i]);
    }

    return profit;
}