/*

*/

class Solution {
public:
    long long solve(int n, long long curr, long long curr1){
        long long steps = 0;
        while(curr <= n){
            steps += min((long long)n+1, curr1) - curr;
            curr *= 10;
            curr1 *= 10;
        } 
        return steps;
    }

    int findKthNumber(int n, int k) {
        long long curr = 1;
        k--;
        
        while(k>0){
            long long steps = solve(n, curr, curr+1);

            if(steps <= k){
                curr += 1;
                k -= steps;
            }
            else{
                curr *= 10;
                k -= 1;
            }
        }

        return curr;
    }
};