/*

*/

class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long cost = 0;

        if(n > k){
            int len1 = k;
            int len2 = n-k;

            cost += (long long)len1*len2; 
        }
        if(m > k){
            int len1 = k;
            int len2 = m-k;

            cost += (long long) len1*len2;         
        }

        return cost;
    }
};©leetcode