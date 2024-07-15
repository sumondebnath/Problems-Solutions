/*
    problem Link : https://www.geeksforgeeks.org/problems/lcm-and-gcd4516/1

    Note: Also using Euclidean Algorithm.
*/

class Solution
{
public:
    long long gcdCal(long long A, long long B)
    {
        while (A > 0 && B > 0)
        {
            if (A > B)
                A %= B;
            else
                B %= A;
        }
        if (A == 0)
            return B;
        return A;
    }
    vector<long long> lcmAndGcd(long long A, long long B)
    {
        // code here
        vector<long long> v;

        long long lcm = (A / gcdCal(A, B)) * B;

        long long gcd = gcdCal(A, B);

        v.push_back(lcm);
        v.push_back(gcd);

        return v;
    }
};