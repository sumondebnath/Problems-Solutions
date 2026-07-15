/*
    https://leetcode.com/problems/sum-of-all-subset-xor-totals/description/?envType=daily-question&envId=2025-04-05
*/

class Solution
{
public:
    int subsetXORSum(vector<int> &nums)
    {
        int sum = 0;

        for (int val : nums)
        {
            sum |= val;
        }

        return sum << nums.size() - 1;
    }
};