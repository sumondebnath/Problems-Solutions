/*
    https://leetcode.com/problems/sum-of-gcd-of-formed-pairs/?envType=daily-question&envId=2026-07-16
*/

class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int mx = nums[0];
        vector<int>v;

        for(int i=0; i<nums.size(); i++){
            if(nums[i] >= mx) mx = nums[i];

            int gd = __gcd(nums[i], mx);
            v.push_back(gd);
        }
        sort(v.begin(), v.end());

        long long res=0;

        int i=0, j=v.size()-1;
        while(i<j){
            res += __gcd(v[i], v[j]);
            i++;
            j--;
        }

        return res;
    }
};