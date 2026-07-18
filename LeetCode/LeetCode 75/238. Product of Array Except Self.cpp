/*
    https://leetcode.com/problems/product-of-array-except-self/?envType=study-plan-v2&envId=leetcode-75
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        int zero = 0;
        for(int num : nums){
            int temp = 0;
            if(num == 0){
                zero++;
                temp = 1;
            }
            else temp = num;

            product *= temp;
        }
        vector<int>ans(nums.size(), 0);
        if(zero > 1) return ans;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0 && zero>0){
                ans[i] = 0;
            }
            else{
                if(nums[i]==0) ans[i] = product;
                else ans[i] = product / nums[i];
            }
        }

        return ans;
    }
};