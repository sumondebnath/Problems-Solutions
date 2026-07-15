/*

*/

class Solution {
public:
    int getLeastFrequentDigit(int n) {
        // map<int, int>mp;
        vector<int>count(10, 0);

        while(n!=0){
            int rem = n%10;
            count[rem]++;
            n /= 10;
        }

        int mini = INT_MAX;

        for(int val : count){
            if(val > 0){
                mini = min(mini, val);
            }
        }

        int result = -1;
        for(int i=0; i<10; i++){
            if(count[i] == mini){
                result = i;
                break;
            }
        }

        return result;
    }
};©leetcode