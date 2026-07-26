/*
    https://leetcode.com/problems/maximum-product-of-three-numbers/?envType=daily-question&envId=2026-07-26
*/

class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        int test1 = nums[n-1] * nums[n-2] * nums[n-3];
        int test2 = nums[0] * nums[1] * nums[n-1];
        int test3 = nums[0] * nums[n-1] * nums[n-2];

        int mx = max(test1,test2);
        mx = max(mx, test3);

        return mx;
    }
};