class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int mini = INT_MAX;
        for(int i=0; i+k-1<nums.size(); i++){
            
            mini = min(mini, abs(nums[i]-nums[i+k-1]));
        }

        return mini;
    }
};