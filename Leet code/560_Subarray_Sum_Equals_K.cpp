/*
    Problem Link : https://leetcode.com/problems/subarray-sum-equals-k/description/
*/

class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int prefix = 0;
        int count = 0;

        unordered_map<int, int> mp; 
        mp[0] = 1;

        for(int i=0; i<nums.size(); i++){
            prefix += nums[i];
            int remove = prefix - k;
            count += mp[remove];
            mp[prefix]++;
        }
        return count;
    }
};