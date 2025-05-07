/*
    https://leetcode.com/problems/power-of-four/description/?envType=problem-list-v2&envId=recursion
*/

class Solution {
    public:
        bool isPowerOfFour(int n) {
            // for(int i=0; i<=n; i++){
            //     if(n==pow(4, i)) return true;
            // }
    
            // return false;
    
            if (n <= 0) return false;
            while (n % 4 == 0) {
                n /= 4;
            }
            return n == 1;
        }
    };