/*
    Problem Link : https://leetcode.com/problems/min-stack/description/
*/

class MinStack
{
public:
    stack<int> st, mn;
    MinStack()
    {
    }

    void push(int val)
    {
        if (mn.empty())
        {
            st.push(val);
            mn.push(val);
            return;
        }
        st.push(val);
        mn.push(min(mn.top(), val));
    }

    void pop()
    {
        if (!st.empty())
        {
            st.pop();
            mn.pop();
        }
    }

    int top()
    {
        return st.top();
    }

    int getMin()
    {
        return mn.top();
    }
};
