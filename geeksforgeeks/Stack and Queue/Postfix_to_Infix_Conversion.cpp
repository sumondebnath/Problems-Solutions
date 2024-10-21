/*
    Problem Link : https://www.geeksforgeeks.org/problems/postfix-to-infix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion
*/

class Solution
{
public:
    string postToInfix(string exp)
    {
        stack<string> st;
        int i = 0;
        int n = exp.length();

        while (i < n)
        {
            if (exp[i] >= 'A' and exp[i] <= 'Z' or exp[i] >= 'a' and exp[i] <= 'z' or exp[i] >= '0' and exp[i] <= '9')
            {
                // string str = string(1, exp[i]);
                string str{exp[i]};
                st.push(str);
            }
            else
            {
                string first = st.top();
                st.pop();
                string second = st.top();
                st.pop();

                string ans = '(' + second + exp[i] + first + ')';

                st.push(ans);
            }
            i++;
        }
        return st.top();
    }
};