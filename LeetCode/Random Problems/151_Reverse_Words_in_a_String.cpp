/*
    Link : https://leetcode.com/problems/reverse-words-in-a-string/description/
*/

class Solution
{
public:
    string reverseWords(string s)
    {
        stack<string> st;
        string str;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] != 32)
            {
                str += s[i];
            }
            if (s[i] == 32 and !str.empty())
            {
                st.push(str);
                str.clear();
            }
        }
        if (!str.empty())
        {
            st.push(str);
        }
        string s2;
        while (!st.empty())
        {
            s2 += st.top();
            if (st.size() > 1)
            {
                s2 += " ";
            }
            st.pop();
        }
        return s2;
    }
};