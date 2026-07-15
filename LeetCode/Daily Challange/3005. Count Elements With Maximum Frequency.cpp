/*

*/

class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>mp;
        int maxi = 0;
        for(int num : nums){
            mp[num]++;
            maxi = max(maxi, mp[num]);
        }

        int count = 0;

        for(auto it : mp){
            if(maxi==it.second) count += it.second;
        }

        return count;
    }
};