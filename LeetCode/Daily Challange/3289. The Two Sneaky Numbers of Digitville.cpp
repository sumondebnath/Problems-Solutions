/*

*/

class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        unordered_map<int, int>mp;
        vector<int>v;
        for(int num : nums){
            mp[num]++;
            if(mp[num] == 2){
                v.push_back(num);
            }
        }

        
        // for(auto it : mp){
        //     if(it.second == 2){
        //         v.push_back(it.first);
        //     }
        // }
        
        return v;
    }
};