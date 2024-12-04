/*
    https://www.geeksforgeeks.org/problems/valid-expression1025/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

bool valid(string s)
{
    int n = s.length();
    stack<char> st;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
            {
                return false;
            }
            else
            {
                if (s[i] == ')' && st.top() == '(')
                {
                    st.pop();
                }
                else if (s[i] == '}' && st.top() == '{')
                {
                    st.pop();
                }
                else if (s[i] == ']' && st.top() == '[')
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
        }
    }
    return st.empty();
}