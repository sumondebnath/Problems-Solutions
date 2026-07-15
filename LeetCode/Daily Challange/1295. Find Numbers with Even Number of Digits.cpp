/*

*/

class Solution {
    public:
        int findEvenDigits(int n){
            int count = 0;
            while(n>0){
                int rem = n%10;
                n /= 10;
                count++;
            }
    
            return count;
        }
        int findNumbers(vector<int>& nums) {
            int n = nums.size();
            int count = 0;
    
            for(int i=0; i<n; i++){
                if(findEvenDigits(nums[i])%2 == 0) count++;
            }
    
            return count;
        }
    };