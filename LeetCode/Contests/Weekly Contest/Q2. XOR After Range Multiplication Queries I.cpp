/*

*/

class Solution {
public:
    int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        int mod = 1e9+7;

        for(auto query : queries){
            int l = query[0];
            int r = query[1];
            int k = query[2];
            int v = query[3];

            for(int i=l; i<=r; i+=k){
                nums[i] = ((long long) nums[i] * v) % mod;
            }
        }

        int result = 0;
        for(int val : nums){
            result ^= val;
        }

        return result;
    }
};©leetcode