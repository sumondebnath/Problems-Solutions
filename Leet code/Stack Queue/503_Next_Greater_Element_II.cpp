/*
    Problem Link : https://leetcode.com/problems/next-greater-element-ii/description/
*/

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(nums.size(), -1);

        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= i + n - 1; j++)
            {
                int idx = j % n;
                if (nums[idx] > nums[i])
                {
                    v[i] = nums[idx];
                    break;
                }
            }
        }

        return v;
    }
};