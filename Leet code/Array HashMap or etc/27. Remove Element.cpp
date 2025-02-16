/*
    https://leetcode.com/problems/remove-element/description/?envType=problem-list-v2&envId=array
*/

class Solution {
    public:
        int removeElement(vector<int>& nums, int val) {
            int count = 0;
    
            for(int i=0; i<nums.size(); i++){
                if(nums[i] != val){
                    nums[count] = nums[i];
                    count++;
                }
            }
    
            return count;
        }
    };