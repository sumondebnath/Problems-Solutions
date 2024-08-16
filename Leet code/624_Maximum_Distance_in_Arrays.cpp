/*
    Problem Link : https://leetcode.com/problems/maximum-distance-in-arrays/description/?envType=daily-question&envId=2024-08-16
*/

class Solution
{
public:
    int maxDistance(vector<vector<int>> &arrays)
    {
        int mini = arrays[0].front();
        int maxi = arrays[0].back();
        int distances = 0;

        for (int i = 1; i < arrays.size(); i++)
        {
            int cur_mini = arrays[i].front();
            int cur_maxi = arrays[i].back();

            int temp = max(cur_maxi - mini, maxi - cur_mini);
            distances = max(distances, temp);

            mini = min(mini, cur_mini);
            maxi = max(maxi, cur_maxi);
        }

        return distances;
    }
};