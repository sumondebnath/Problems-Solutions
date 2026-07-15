/*
    https://leetcode.com/problems/find-missing-and-repeated-values/description/?envType=daily-question&envId=2025-03-06
*/

class Solution {
    public:
        vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
            int repeat = -1, missing = -1;
    
            map<int, int>mp;
            for(auto row : grid){
                for(int val : row){
                    mp[val]++;
                }
            }
    
            for(int i=1; i<=grid.size()*grid.size(); i++){
                if(!mp.count(i)) missing = i;
                else if(mp[i] == 2) repeat = i; 
            }
    
            return {repeat, missing};
        }
    };