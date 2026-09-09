/*

*/

class Solution {
public:
    long long countCommas(long long n) {
        long long count = 0;
        long long temp = 1000;
        while(temp<=n){
            count += n-temp+1;
            temp *= 1000;
        }
        return count;
    }
};