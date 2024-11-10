/*
    Problem Link : https://leetcode.com/problems/hamming-distance/description/
*/

class Solution
{
public:
    int hammingDistance(int x, int y)
    {
        int result = x ^ y;

        int count = 0;
        while (result != 0)
        {
            result = result & (result - 1);
            count++;
        }
        return count;
    }
};