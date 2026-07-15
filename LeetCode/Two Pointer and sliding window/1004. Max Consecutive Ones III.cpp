/*
    Problem Link : https://leetcode.com/problems/max-consecutive-ones-iii/description/
*/

class Solution
{
public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxlen = 0;
        int l = 0, r = 0, zero = 0;
        int n = nums.size();

        while (r < n)
        {
            if (nums[r] == 0)
                zero++;
            // while (zero > k)
            if (zero > k)
            {
                if (nums[l] == 0)
                    zero--;
                l++;
            }
            if (zero <= k)
            {
                maxlen = max(maxlen, r - l + 1);
            }
            r++;
        }

        return maxlen;
    }
};