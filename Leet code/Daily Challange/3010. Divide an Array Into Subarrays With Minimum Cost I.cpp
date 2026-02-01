/*

*/

class Solution {
public:
    int minimumCost(vector<int>& nums) {
        sort(nums.begin()+1, nums.end());

        int sum = nums[0]+nums[1]+nums[2];   

        return sum;
    }
};