/*
    https://leetcode.com/problems/partition-array-according-to-given-pivot/description/
*/

class Solution {
    public:
        vector<int> pivotArray(vector<int>& nums, int pivot) {
            int n = nums.size();
            int less=0, i=0;
            int grater=n-1, j=n-1;
    
            vector<int>ans(n);
    
            while(i<n){
                if(nums[i] < pivot){
                    ans[less] = nums[i];
                    less++;
                }
                if(nums[j] > pivot){
                    ans[grater] = nums[j];
                    grater--;
                }
                i++;
                j--;
            }
    
            while(less <= grater){
                ans[less] = pivot;
                less++;
            }
    
            return ans;
        }
    };