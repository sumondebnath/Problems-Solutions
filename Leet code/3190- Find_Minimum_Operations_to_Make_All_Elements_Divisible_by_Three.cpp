/*
    Problems Link : https://leetcode.com/problems/find-minimum-operations-to-make-all-elements-divisible-by-three/description/
*/

class Solution
{
public:
    int minimumOperations(vector<int> &nums)
    {
        int count = 0;

        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[i];
            if ((temp + 1) % 3 == 0 || (temp - 1) % 3 == 0)
            {
                count++;
            }
        }

        return count;
    }
};