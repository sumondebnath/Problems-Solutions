/*
    Problem Link : https://www.geeksforgeeks.org/problems/count-digits5716/1

*/

class Solution{
public:
    int evenlyDivides(int N){
        if(N == 0) return 0;
        //code here
        int temp = N;
        int count = 0;
        while(temp != 0){
            int rem = temp%10;
            temp /= 10;
            
            if(rem != 0) {
                if(N % rem == 0){
                    count++;
                }
            }
        }
        return count;
    }
};