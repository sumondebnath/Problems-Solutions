/*
    https://leetcode.com/problems/minimum-number-game/description/?envType=problem-list-v2&envId=heap-priority-queue
*/

class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {

        sort(nums.begin(), nums.end());

        int i=0;
        int j = 1;

        while(j<=nums.size()-1){
            swap(nums[i], nums[j]);
            // int temp = nums[j];
            // nums[j] = nums[i];
            // nums[i] = temp;
            i+=2;
            j+=2;
        }

        return nums;
    }
};