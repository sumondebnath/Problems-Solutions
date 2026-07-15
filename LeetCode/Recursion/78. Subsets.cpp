/*
    Problem Link : https://leetcode.com/problems/subsets/description/
*/

class Solution
{
public:
    void subset_recursive(vector<int> &nums, vector<vector<int>> &arr, vector<int> &curr, int n)
    {
        arr.push_back(curr);

        for (int i = n; i < nums.size(); i++)
        {
            curr.push_back(nums[i]);
            subset_recursive(nums, arr, curr, i + 1);
            curr.pop_back();
        }
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> arr;
        vector<int> curr;
        subset_recursive(nums, arr, curr, 0);

        return arr;
    }
};