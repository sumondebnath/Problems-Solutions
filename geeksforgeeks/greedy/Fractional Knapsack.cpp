/*
    https://www.geeksforgeeks.org/problems/fractional-knapsack-1587115620/1
*/

class Solution
{
public:
    // Function to get the maximum total value in the knapsack.
    static bool comp(const pair<int, int> &a, const pair<int, int> &b)
    {
        double a1 = (double)a.first / (double)a.second;
        double b1 = (double)b.first / (double)b.second;

        return a1 > b1;
    }
    double fractionalKnapsack(vector<int> &val, vector<int> &wt, int capacity)
    {
        vector<pair<int, int>> both;

        for (int i = 0; i < val.size(); i++)
        {
            both.push_back({val[i], wt[i]});
        }

        sort(both.begin(), both.end(), comp);

        double total = 0;
        int w = 0;

        for (int i = 0; i < both.size(); i++)
        {
            if (w + both[i].second <= capacity)
            {
                total += both[i].first;
                w += both[i].second;
            }
            else
            {
                int remain = capacity - w;
                total += ((double)remain / (double)both[i].second) * (double)both[i].first;
                break;
            }
        }

        return total;
    }
};
