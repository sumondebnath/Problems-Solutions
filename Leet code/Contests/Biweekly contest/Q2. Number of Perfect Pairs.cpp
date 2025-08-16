/*

*/

class Solution {
public:
    long long perfectPairs(vector<int>& nums) {
        int n = nums.size();
        long long count = 0;

        for(int i=0; i<n; i++){
            if(nums[i] < 0) nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());

        int j = 0;

        for(int i=0; i<n; i++){
            while(j<n && nums[j] <= 2 * nums[i]){
                j++;
            }
            count += (j-i-1);
        }

        return count;
    }
};©leetcode