
/*
    problem Link : https://www.geeksforgeeks.org/problems/sum-of-all-divisors-from-1-to-n4738/1
*/



//User function Template for C++
class Solution
{
public:
    
    long long sumOfDivisors(int N)
    {
        long long sum = 0;
        for(int i=1; i<=N; i++){
            sum += (N/i)*i;
        }
        return sum;
    }
};
