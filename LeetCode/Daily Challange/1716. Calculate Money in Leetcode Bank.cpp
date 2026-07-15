/*

*/

class Solution {
public:
    int totalMoney(int n) {
        int day = 1;
        int count = 0;
        
        while(n > 0){
            for(int i=0; i<min(n, 7); i++){
                count += day + i;
            }
            n -= 7;
            day++; 
        }

        return count;
    }
};