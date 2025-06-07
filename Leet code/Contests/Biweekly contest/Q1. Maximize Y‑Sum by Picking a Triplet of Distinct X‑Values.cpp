/*

*/

class Solution {
public:
    int maxSumDistinctTriplet(vector<int>& x, vector<int>& y) {
        int n = x.size();
        map<int, int>mp;

        for(int i=0; i<n; i++){
            if(mp.find(x[i]) == mp.end()){
                mp[x[i]] = y[i];
            }
            else {
                mp[x[i]] = max(mp[x[i]], y[i]);
            }
        }

        if(mp.size() < 3) return -1;

        vector<int>v;
        for(auto it : mp){
            v.push_back(it.second);
        }

        sort(v.begin(), v.end(), greater<int>());

        return v[0] + v[1] + v[2];
    }
};©leetcode