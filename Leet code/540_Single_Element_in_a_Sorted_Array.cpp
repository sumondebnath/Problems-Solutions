/*
    Problem Link : https://leetcode.com/problems/single-element-in-a-sorted-array/description/
*/

class Solution
{
public:
    int singleNonDuplicate(vector<int> &nums)
    {
        int n = nums.size();
        if (nums.size() == 1)
        {
            return nums[0];
        }
        if (nums[0] != nums[1])
            return nums[0];
        if (nums[n - 1] != nums[n - 2])
            return nums[n - 1];

        int left = 1;
        int right = nums.size() - 2;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (nums[mid] != nums[mid + 1] and nums[mid] != nums[mid - 1])
            {
                return nums[mid];
            }
            if (mid % 2 == 1 and nums[mid] == nums[mid - 1] or mid % 2 == 0 and nums[mid] == nums[mid + 1])
            {
                left = mid + 1;
            }
            else
            {
                right = mid - 1;
            }
        }
        return -1;
    }
};