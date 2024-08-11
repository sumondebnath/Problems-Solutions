/*
    problem Link : https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/
*/

        // First Approch

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int count = 0;
        set<int> st;

        for (int i = 0; i < nums.size(); i++)
        {
            st.insert(nums[i]);
        }
        int idx = 0;
        for (auto it : st)
        {
            nums[idx] = it;
            idx++;
        }
        nums.erase(nums.begin() + idx, nums.end());
        return nums.size();
    }
};


        // Second Approch.

class Solution
{
public:
    int removeDuplicates(vector<int> &nums)
    {
        int i = 0;
        for (int j = 1; j < nums.size(); j++)
        {
            if (nums[j] != nums[i])
            {
                nums[i + 1] = nums[j];
                i++;
            }
        }

        nums.erase(nums.begin() + i + 1, nums.end());

        return nums.size();
    }
};