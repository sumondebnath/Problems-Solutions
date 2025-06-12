/*

*/

class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int maxi = INT_MIN;

        nums.push_back(nums[0]);
        for(int i=1; i<nums.size(); i++){
            maxi = max(maxi, abs(nums[i-1] - nums[i]));
        }

        return maxi;
    }
};