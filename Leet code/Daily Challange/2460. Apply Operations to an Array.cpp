/*
    https://leetcode.com/problems/apply-operations-to-an-array/description/
*/

class Solution {
    public:
        vector<int> applyOperations(vector<int>& nums) {
            int i=0;
            int n = nums.size()-1;
    
            while(i<n){
                if(nums[i] == nums[i+1]){
                    nums[i] *= 2;
                    nums[i+1] = 0;
                }
                i++;
            }
            vector<int>arr;
            for(int i=0; i<=n; i++){
                if(nums[i] != 0) arr.push_back(nums[i]);
            }
            int len = nums.size()-arr.size();
            while(len--){
                arr.push_back(0);
            }
    
            return arr;
        }
    };