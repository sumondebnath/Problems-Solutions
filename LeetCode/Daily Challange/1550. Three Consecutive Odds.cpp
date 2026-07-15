/*
    https://leetcode.com/problems/three-consecutive-odds/description/?envType=daily-question&envId=2025-05-11
*/

class Solution
{
public:
    bool threeConsecutiveOdds(vector<int> &arr)
    {
        int count = 0;

        for (int num : arr)
        {

            if (num % 2 != 0)
                count++;
            else
                count = 0;

            if (count >= 3)
                return true;
        }

        return false;
    }
};