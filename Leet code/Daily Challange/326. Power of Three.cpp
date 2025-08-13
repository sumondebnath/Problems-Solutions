/*

*/

class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0) return false;

        int num = pow(3, 19);

        return (num % n) == 0;
    }
};