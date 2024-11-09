/*
    Problem link : https://www.geeksforgeeks.org/problems/bit-manipulation-1666686020/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=bit-manipulation
*/

class Solution
{
public:
    void bitManipulation(int num, int i)
    {
        int ith = (num >> i - 1) & 1;
        int set = num | (1 << i - 1);
        int clr = num & ~(1 << i - 1);

        cout << ith << " " << set << " " << clr;
    }
};