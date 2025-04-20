/*

*/

class Solution
{
public:
    int maximumPossibleSize(vector<int> &nums)
    {
        stack<int> st;

        for (int num : nums)
        {
            int curr = num;
            // st.push(curr);

            while (!st.empty() && curr < st.top())
            {
                curr = max(curr, st.top());
                st.pop();
            }

            st.push(curr);
        }

        return st.size();
    }
};
©leetcode