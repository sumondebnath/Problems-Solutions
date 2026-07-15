/*
    https://leetcode.com/problems/count-number-of-nice-subarrays/description/
*/

class Solution
{
public:
    int EvenOdd(int i)
    {
        return i % 2;
    }
    int CountOdd(vector<int> &nums, int k)
    {
        if (k < 0)
            return 0;
        int n = nums.size();
        int l = 0, r = 0, sum = 0, count = 0;

        while (r < n)
        {
            sum += EvenOdd(nums[r]);
            while (sum > k)
            {
                sum -= EvenOdd(nums[l]);
                l++;
            }
            count += r - l + 1;
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int> &nums, int k)
    {

        return CountOdd(nums, k) - CountOdd(nums, k - 1);
    }
};