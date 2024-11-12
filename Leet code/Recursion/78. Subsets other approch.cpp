/*
    Problem Link : https://leetcode.com/problems/subsets/description/
*/

class Solution
{
public:
    void subset_recursive(vector<int> nums, vector<vector<int>> &arr, vector<int> curr, int n)
    {
        // base case
        if (n >= nums.size())
        {
            arr.push_back(curr);
            return;
        }
        // exclude
        subset_recursive(nums, arr, curr, n + 1);
        // include
        curr.push_back(nums[n]);
        subset_recursive(nums, arr, curr, n + 1);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<vector<int>> arr;
        vector<int> curr;
        subset_recursive(nums, arr, curr, 0);

        return arr;
    }
};