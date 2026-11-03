/*

*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int maxi = 0;
        for(int num : nums){
            if(num > maxi) maxi = num;
        }
        
        int count = 0;

        for(int num : nums){
            count += maxi - num;
        }

        return count;
    }
};