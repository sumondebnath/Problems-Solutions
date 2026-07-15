/*
    https://leetcode.com/problems/number-of-distinct-averages/description/?envType=problem-list-v2&envId=two-pointers
*/

class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int l = 0;
        int r = nums.size()-1;

        set<float>st;

        while(l<r){
            float avg = (nums[l] + nums[r]) / 2.00;
            st.insert(avg);
            l++;
            r--;
        }

        return st.size();
    }
};