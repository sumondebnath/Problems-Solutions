/*
    https://www.naukri.com/code360/problems/fractional-knapsack_975286
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(const pair<int, int> &a, const pair<int, int> &b)
{
    double a1 = (double)a.second / (double)a.first;
    double b1 = (double)b.second / (double)b.first;
    return a1 > b1;
}

double maximumValue(vector<pair<int, int>> &items, int n, int w)
{
    sort(items.begin(), items.end(), comp);

    double totalVal = 0;
    int currw = 0;

    for (int i = 0; i < n; i++)
    {
        if (currw + items[i].first <= w)
        {
            totalVal += items[i].second;
            currw += items[i].first;
        }
        else
        {
            int remainingWeight = w - currw;
            totalVal += (double)remainingWeight / items[i].first * items[i].second;
            break;
        }
    }
    return totalVal;
}