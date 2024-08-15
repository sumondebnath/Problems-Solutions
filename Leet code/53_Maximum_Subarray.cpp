/*
    Problem Link : https://leetcode.com/problems/maximum-subarray/description/
*/

class Solution
{
public:
    int maxSubArray(vector<int> &nums)
    {
        int sum = 0;
        int max_val = INT_MIN;
        int left = 0, right = nums.size() - 1;

        while (left <= right)
        {
            sum += nums[left];
            max_val = max(max_val, sum);
            if (sum < 0)
            {
                sum = 0;
            }
            left++;
        }

        return max_val;
    }
};