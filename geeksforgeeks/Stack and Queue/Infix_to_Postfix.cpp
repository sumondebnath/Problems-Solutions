/*
    Problem Link : https://www.geeksforgeeks.org/problems/infix-to-postfix-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=infix-to-postfix
*/

class Solution
{
public:
    // Function to convert an infix expression to a postfix expression.
    int priority(char x)
    {
        if (x == '^')
            return 3;
        else if (x == '*' or x == '/')
            return 2;
        else if (x == '+' or x == '-')
            return 1;
        return -1;
    }

    string infixToPostfix(string s)
    {
        stack<char> st;
        int i = 0;
        int n = s.length();
        string ans;

        while (i < n)
        {
            if (s[i] >= 'A' and s[i] <= 'Z' or s[i] >= 'a' and s[i] <= 'z' or s[i] >= '0' and s[i] <= '9')
            {
                ans += s[i];
            }
            else if (s[i] == '(')
            {
                st.push(s[i]);
            }
            else if (s[i] == ')')
            {
                while (!st.empty() and st.top() != '(')
                {
                    ans += st.top();
                    st.pop();
                }
                st.pop();
            }
            else
            {
                while (!st.empty() and priority(s[i]) <= priority(st.top()))
                {
                    ans += st.top();
                    st.pop();
                }
                st.push(s[i]);
            }
            i++;
        }

        while (!st.empty())
        {
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};
