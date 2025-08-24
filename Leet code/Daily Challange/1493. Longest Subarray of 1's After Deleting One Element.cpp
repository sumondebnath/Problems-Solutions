/*

*/

class Solution
{
public:
    int longestSubarray(vector<int> &nums)
    {
        int zero = 0;
        int longest = 0;
        int start = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] == 0)
                zero++;
            if (zero > 1)
            {
                zero -= (nums[start] == 0);
                start++;
            }

            longest = max(longest, i - start);
        }

        return longest;
    }
};