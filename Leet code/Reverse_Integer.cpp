/*
    Problem Link : https://leetcode.com/problems/reverse-integer/description/
*/

class Solution
{
public:
    int reverse(int x)
    {
        unsigned val = 0;
        while (x != 0)
        {
            int rem = x % 10;
            x /= 10;
            if (val > 214748364 and val < -214748364)
            {
                return 0;
            }
            val = val * 10 + rem;
        }
        return val;
    }
};