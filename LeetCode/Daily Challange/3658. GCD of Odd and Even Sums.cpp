/*
    https://leetcode.com/problems/gcd-of-odd-and-even-sums/description/?envType=daily-question&envId=2026-07-15
*/

class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int e, o;
        o = n*n;
        e = n*(n+1);

        cout<<e<<" "<<o<<endl;

        return __gcd(o, e);
    }
};