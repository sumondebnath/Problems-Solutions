/*
    https://leetcode.com/problems/a-number-after-a-double-reversal/description/?envType=problem-list-v2&envId=math
*/

class Solution {
public:
    bool isSameAfterReversals(int num) {

        return num==0 || !(num%10==0);
    }
};