/*

*/

class Solution {
    public:
        int minDeletion(string s, int k) {
            map<char, int>mp;
            for(char ch : s){
                mp[ch]++;
            }
    
            vector<int>v;
            for(auto it : mp){
                v.push_back(it.second);
            }
    
            if(v.size() <= k) return 0;
    
            int temp = v.size() - k;
            int count = 0;
    
            sort(v.begin(), v.end());
            
            for(int i=0; i<temp; i++){
                count += v[i];
            }
    
            return count;
        }
    };©leetcode