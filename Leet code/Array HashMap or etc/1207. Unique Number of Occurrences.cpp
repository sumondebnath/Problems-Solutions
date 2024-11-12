/*
    Problem Link : https://leetcode.com/problems/unique-number-of-occurrences/description/
*/

class Solution
{
public:
    bool uniqueOccurrences(vector<int> &arr)
    {
        map<int, int> mp;

        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }

        set<int> st;

        for (auto it : mp)
        {
            st.insert(it.second);
        }

        if (mp.size() == st.size())
            return true;
        return false;
    }
};