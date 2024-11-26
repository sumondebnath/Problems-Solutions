/*
    https://www.geeksforgeeks.org/problems/lemonade-change/0
*/

class Solution
{
public:
    bool lemonadeChange(int N, vector<int> &bills)
    {
        int five = 0, ten = 0;

        for (int val : bills)
        {
            if (val == 5)
            {
                five++;
            }
            else if (val == 10)
            {
                if (five == 0)
                {
                    return false;
                }
                else
                {
                    ten++;
                    five--;
                }
            }
            else
            {
                if (five and ten)
                {
                    five--;
                    ten--;
                }
                else if (five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    return false;
                }
            }
        }
        return true;
    }
};