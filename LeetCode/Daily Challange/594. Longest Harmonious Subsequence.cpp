/*

*/

class Solution {
public:
    int findLHS(vector<int>& nums) {
        map<int, int>mp;

        for(int num : nums){
            mp[num]++;
        }

        int count = 0;

        for(auto it : mp){
            if(mp.find(it.first+1) != mp.end()){
                count = max(count, it.second+mp[it.first+1]);
            }
        }

        return count;
    }
};