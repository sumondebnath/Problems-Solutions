/*
    Problem Link : https://leetcode.com/problems/rotate-array/description/
*/

class Solution
{
public:
    void rotate(vector<int> &nums, int k)
    {
        int n = nums.size();
        k %= nums.size();
        int d = n - k;

        reverse(nums.begin(), nums.end() - k);
        reverse(nums.begin() + d, nums.end());
        reverse(nums.begin(), nums.end());
    }
};