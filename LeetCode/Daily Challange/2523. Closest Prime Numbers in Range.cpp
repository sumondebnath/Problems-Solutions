/*
    https://leetcode.com/problems/closest-prime-numbers-in-range/description/?envType=daily-question&envId=2025-03-07
*/

class Solution
{
public:
    bool isPrime(int n)
    {
        if (n <= 1)
        {
            return false;
        }
        for (int i = 2; i <= sqrt(n); ++i)
        {
            if (n % i == 0)
            {
                return false;
            }
        }
        return true;
    }
    vector<int> closestPrimes(int left, int right)
    {
        vector<int> arr;
        for (int i = left; i <= right; i++)
        {
            if (isPrime(i))
                arr.push_back(i);
        }

        if (arr.size() < 2)
            return {-1, -1};

        int minDiff = INT_MAX;
        vector<int> result = {-1, -1};

        for (int i = 0; i < arr.size() - 1; ++i)
        {
            int diff = arr[i + 1] - arr[i];
            if (diff < minDiff)
            {
                minDiff = diff;
                result = {arr[i], arr[i + 1]};
            }
        }

        return result;
    }
};