/*
    https://leetcode.com/problems/count-symmetric-integers/description/?envType=daily-question&envId=2025-04-11
*/

class Solution {
    public:
        int countSymmetricIntegers(int low, int high) {
            int count = 0;
    
            for(int i=low; i<=high; i++){
                if(i<100 && i%11==0) count++;
                else if(i>=1000 && i<10000){
                    int first = i/1000 + (i%1000) / 100;
                    int sec = (i%100) / 10 + i%10;
    
                    if(first == sec) count++;
                }
            }
    
            return count;
        }
    };