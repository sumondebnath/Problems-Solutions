/*
    Problem Link : https://leetcode.com/problems/next-greater-element-i/description/
*/

class Solution
{
public:
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(nums1.size(), -1);
        bool flag = false;
        for (int i = 0; i < nums1.size(); i++)
        {
            flag = false;
            for (int j = 0; j < nums2.size(); j++)
            {
                if (nums1[i] == nums2[j])
                {
                    flag = true;
                }
                if (flag and nums2[j] > nums1[i])
                {
                    ans[i] = nums2[j];
                    break;
                }
            }
        }

        return ans;
    }
};