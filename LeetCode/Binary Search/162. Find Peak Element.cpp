/*
    https://leetcode.com/problems/find-peak-element/description/?envType=problem-list-v2&envId=binary-search
*/

class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = nums.size()-1;

        while(left < right){
            int mid = (right + left) / 2;

            if(nums[mid] < nums[mid+1]){
                left = mid + 1;
            }
            else {
                right = mid;
            }
        }

        return left;
    }
};