
/*
    Problem Link : https://leetcode.com/problems/palindrome-number/description/
*/

class Solution
{
public:
    bool isPalindrome(int x)
    {
        // if(x<0){
        //     return false;
        // }
        long long val = 0;
        int temp = x;

        while (temp > 0)
        {
            int rem = temp % 10;
            temp /= 10;

            val = val * 10 + rem;
        }

        return x == val;
    }
};