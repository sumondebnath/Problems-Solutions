/*
    Problem link : https://www.geeksforgeeks.org/problems/postfix-to-prefix-conversion/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=postfix-to-prefix-conversion
*/

class Solution
{
public:
    string postToPre(string post_exp)
    {
        stack<string> st;
        int i = 0;

        while (i < post_exp.length())
        {
            if (post_exp[i] >= 'A' and post_exp[i] <= 'Z' or post_exp[i] >= 'a' and post_exp[i] <= 'z')
            {
                string str{post_exp[i]};
                st.push(str);
            }
            else
            {
                string first = st.top();
                st.pop();
                string second = st.top();
                st.pop();

                string ans = post_exp[i] + second + first;
                st.push(ans);
            }
            i++;
        }
        return st.top();
    }
};