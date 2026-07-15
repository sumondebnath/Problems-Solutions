/*
    Problem Link : https://leetcode.com/problems/next-greater-element-ii/description/
*/

class Solution
{
public:
    vector<int> nextGreaterElements(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> v(nums.size());
        stack<int> st;

        for (int i = 2 * n - 1; i >= 0; i--)
        {
            while (!st.empty() and st.top() <= nums[i % n])
            {
                st.pop();
            }
            if (i < n)
            {
                if (st.empty())
                    v[i] = -1;
                else
                    v[i] = st.top();
            }
            st.push(nums[i % n]);
        }

        return v;
    }
};