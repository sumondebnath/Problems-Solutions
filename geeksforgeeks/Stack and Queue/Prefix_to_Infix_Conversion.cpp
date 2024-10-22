/*
    Problem Link : https://www.geeksforgeeks.org/problems/prefix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=prefix-to-infix-conversion
*/

class Solution
{
public:
    string preToInfix(string pre_exp)
    {
        stack<string> st;
        int i = pre_exp.length() - 1;

        while (i >= 0)
        {
            if (pre_exp[i] >= 'A' and pre_exp[i] <= 'Z' or pre_exp[i] >= 'a' and pre_exp[i] <= 'z')
            {
                string str{pre_exp[i]};
                st.push(str);
            }
            else
            {
                string first = st.top();
                st.pop();
                string second = st.top();
                st.pop();

                string ans = '(' + first + pre_exp[i] + second + ')';
                st.push(ans);
            }
            i--;
        }

        return st.top();
    }
};