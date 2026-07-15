/*
    Problem Link : https://leetcode.com/problems/implement-stack-using-queues/description/
*/

class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }

    void push(int x)
    {
        q1.push(x);
    }

    int pop()
    {
        int last;
        while (!q1.empty())
        {
            int temp = q1.front();
            q1.pop();
            if (q1.empty())
            {
                last = temp;
                break;
            }
            q2.push(temp);
        }
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }

        return last;
    }

    int top()
    {
        int temp;
        while (!q1.empty())
        {
            temp = q1.front();
            q1.pop();
            q2.push(temp);
        }
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
        return temp;
    }

    bool empty()
    {
        if (q1.empty())
            return true;
        else
            return false;
    }
};