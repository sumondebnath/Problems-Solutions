/*
    https://leetcode.com/problems/number-of-equivalent-domino-pairs/description/?envType=daily-question&envId=2025-05-04
*/

class Solution {
    public:
        int numEquivDominoPairs(vector<vector<int>>& dominoes) {
            int n = dominoes.size();
            // int count = 0;
    
            map<pair<int, int>, int> count;
            int res = 0;
    
            for(auto domino : dominoes){
                int a = domino[0];
                int b = domino[1];
                pair<int, int> key = {min(a, b), max(a, b)};
                res += count[key];
                count[key]++;
            }
    
            return res;
        }
    };