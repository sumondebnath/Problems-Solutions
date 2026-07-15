/*
    Problem Link : https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/description/
*/

class Solution
{
public:
    vector<int> twoSum(vector<int> &numbers, int target)
    {
        vector<int> v(2);

        int left = 1;
        int right = numbers.size();

        while (left < right)
        {
            int num = numbers[left - 1] + numbers[right - 1];

            if (num == target)
            {
                v[0] = left;
                v[1] = right;
                return v;
            }
            else if (num < target)
                left++;
            else
                right--;
        }
        return v;
    }
};