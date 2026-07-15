/*
    Problem Link : https://leetcode.com/problems/implement-queue-using-stacks/description/
*/

class MyQueue
{
public:
    stack<int> st1, st2;
    MyQueue()
    {
    }

    void push(int x)
    {
        st1.push(x);
    }

    int pop()
    {
        int front;
        while (!st1.empty())
        {
            int temp = st1.top();
            st1.pop();
            if (st1.empty())
            {
                front = temp;
                break;
            }
            st2.push(temp);
        }
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return front;
    }

    int peek()
    {
        int temp;
        while (!st1.empty())
        {
            temp = st1.top();
            st1.pop();
            st2.push(temp);
        }
        while (!st2.empty())
        {
            st1.push(st2.top());
            st2.pop();
        }
        return temp;
    }

    bool empty()
    {
        return st1.empty();
    }
};