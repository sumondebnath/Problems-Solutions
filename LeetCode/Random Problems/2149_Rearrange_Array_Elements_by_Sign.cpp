/*
    Problem Link : https://leetcode.com/problems/rearrange-array-elements-by-sign/description/
*/

class Solution
{
public:
    vector<int> rearrangeArray(vector<int> &nums)
    {
        vector<int> v;
        vector<int> v1;
        vector<int> v2;

        for (int i = 0; i < nums.size(); i++)
        {
            if (nums[i] > 0)
            {
                v1.push_back(nums[i]);
            }
            else
            {
                v2.push_back(nums[i]);
            }
        }
        for (int i = 0; i < v1.size(); i++)
        {
            v.push_back(v1[i]);
            v.push_back(v2[i]);
        }

        return v;
    }
};