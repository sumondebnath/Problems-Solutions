/*
    Link : https://leetcode.com/problems/search-in-rotated-sorted-array-ii/description/
*/

class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left=0, right=nums.size()-1;
        bool temp = false;

        while(left<=right){
            int mid = (left+right)/2;
            if(nums[mid]==target){
                return true;
            }
            if(nums[left]==nums[mid] and nums[mid]==nums[right]){
                left++;
                right--;
                continue;
            }
            else if(nums[left]<=nums[mid]){
                if(nums[left]<=target and target<=nums[mid]){
                    right=mid-1;
                } 
                else{
                    left = mid+1;
                }
            }
            else{
                if(nums[mid]<=target and target<=nums[right]){
                    left = mid+1;
                }
                else{
                    right = mid-1;
                }
            }
        }

        // for(int i=0; i<nums.size(); i++){
        //     if(nums[i]==target) return true;
        // }
        return false;
    }
};