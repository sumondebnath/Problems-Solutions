/*
    Problem Link : https://leetcode.com/problems/subsets/description/
*/

class Solution
{
public:
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> arr;

        int no_of_subsets = 1 << nums.size();

        for (int i = 0; i < no_of_subsets; i++)
        {
            vector<int> v;
            for (int j = 0; j < nums.size(); j++)
            {
                if (i & (1 << j))
                    v.push_back(nums[j]);
            }
            arr.push_back(v);
        }

        return arr;
    }
};