/*

*/

class Solution {
public:
    int product(int n){
        int ans = 1;
        while(n>0){
            ans *= n%10;
            n/=10;
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        
        for(int i=n; i<=n+9; i++){
            if(product(i)%t == 0) return i;
        }
        return n;
    }
};