/*

*/

class Solution {
public:
    
    bool canMakeEqual(vector<int>& nums, int k) {
        int n = nums.size();

        vector<int> nums1 = nums;
        int count1 = 0;
        for (int i = 0; i < n - 1; i++) {
            if (nums1[i] == 1) continue;
            nums1[i] *= -1;
            nums1[i + 1] *= -1;
            count1++;
        }
        if (nums1[n - 1] == 1 && count1 <= k) return true;
    
        int count2 = 0;
        vector<int> nums2 = nums;
        for (int i = 0; i < n - 1; i++) {
            if (nums2[i] == -1) continue;
            nums2[i] *= -1;
            nums2[i + 1] *= -1;
            count2++;
        }
        if (nums2[n - 1] == -1 && count2 <= k) return true;
        return false;
    }
};©leetcode