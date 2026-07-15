/*
    https://leetcode.com/problems/valid-parenthesis-string/description/
*/

class Solution
{
public:
    bool checkValidString(string s)
    {
        int n = s.length();
        int mini = 0, maxi = 0;

        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(')
            {
                mini += 1;
                maxi += 1;
            }
            else if (s[i] == ')')
            {
                mini -= 1;
                maxi -= 1;
            }
            else
            {
                mini -= 1;
                maxi += 1;
            }

            if (mini < 0)
                mini = 0;
            if (maxi < 0)
                return false;
        }

        return mini == 0;
    }
};