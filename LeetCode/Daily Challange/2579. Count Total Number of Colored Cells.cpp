/*
    https://leetcode.com/problems/count-total-number-of-colored-cells/description/?envType=daily-question&envId=2025-03-05
*/

class Solution {
    public:
        long long coloredCells(int n) {
            long long x = pow(n, 2) + pow(n-1, 2);
            return x;
        }
    };