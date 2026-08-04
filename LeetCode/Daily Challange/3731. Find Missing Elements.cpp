/*

*/

class Solution {
public:
    bool findElement(int val, vector<int>nums){
        for(int num : nums){
            if(num == val) return true;
        }
        return false;
    }
    vector<int> findMissingElements(vector<int>& nums) {
        int mx=INT_MIN;
        int mn = INT_MAX;
        vector<int>v;

        for(int num : nums){
            mx = max(mx, num);
            mn = min(mn, num);
        }

        for(int i=mn; i<mx; i++){
            if(!findElement(i, nums)) v.push_back(i);
        }

        return v;
    }
};