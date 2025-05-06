/*
    https://leetcode.com/problems/build-array-from-permutation/description/?envType=daily-question&envId=2025-05-06
*/

class Solution {
    public:
        vector<int> buildArray(vector<int>& nums) {
            vector<int>ans(nums.size());
    
            for(int i=0; i<nums.size(); i++){
                ans[i] = nums[nums[i]];
            }
    
            return ans;
        }
    };