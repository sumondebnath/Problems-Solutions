/*
    Problem Link : https://www.geeksforgeeks.org/problems/two-numbers-with-odd-occurrences5846/1
*/

class Solution
{
public:
    vector<long long int> twoOddNum(long long int Arr[], long long int N)
    {
        long long int x_or = 0;

        for (int i = 0; i < N; i++)
        {
            x_or ^= Arr[i];
        }

        long long int rightMost = (x_or & x_or - 1) ^ x_or;

        long long int b1 = 0, b2 = 0;

        for (int i = 0; i < N; i++)
        {
            if (Arr[i] & rightMost)
                b1 ^= Arr[i];
            else
                b2 ^= Arr[i];
        }

        if (b1 > b2)
            return {b1, b2};
        return {b2, b1};
    }
};