/*
    https://leetcode.com/problems/increasing-triplet-subsequence/?envType=study-plan-v2&envId=leetcode-75
*/

class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        int m=INT_MAX, n=INT_MAX, k=INT_MAX;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] <= m) m = nums[i];
            else if(nums[i] <= n) n = nums[i];
            else return true;
        }

        return false;
    }
};