/*

*/

class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        int n = nums.size();

        sort(nums.begin(), nums.end());

        int count = 0;
        int temp = nums[0];

        for(int num : nums){
            if(num - temp > k){
                count++;
                temp = num;
            }
        }

        return count+1;
    }
};