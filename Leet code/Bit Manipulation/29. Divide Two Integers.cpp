/*
    Problem Link : https://leetcode.com/problems/divide-two-integers/description/
*/

class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        if (dividend == divisor)
            return 1;

        bool sign = true;
        if (dividend >= 0 && divisor < 0)
            sign = false;
        if (dividend < 0 && divisor > 0)
            sign = false;

        unsigned int n = abs(dividend);
        unsigned int d = abs(divisor);

        unsigned int ans = 0;
        while (n >= d)
        {
            int count = 0;

            while (n > (d << (count + 1)))
            {
                count++;
            }

            ans += (1 << count);

            n = n - d * (1 << count);
        }

        if (ans == (1 << 31) and sign)
            return INT_MAX;

        return sign ? ans : (-1 * ans);
    }
};