/*

*/

class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int, int, greater<int>>mp;

        for(int val : arr){
            mp[val]++;
        }

        for(auto it : mp){
            if(it.first == it.second) return it.first;
        }

        return -1;
    }
};