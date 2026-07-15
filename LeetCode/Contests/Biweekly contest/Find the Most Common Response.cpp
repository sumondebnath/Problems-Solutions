/*

*/

class Solution {
    public:
        string findCommonResponse(vector<vector<string>>& responses) {
            vector<string>v;
    
            for(auto str : responses){
                set<string>st;
                for(string s : str){
                    st.insert(s);
                }
                for(auto s : st){
                    v.push_back(s);
                }
            }
    
            map<string, int>mp;
            
            for(string s : v){
                mp[s]++;
            }
    
            int maxi = 0;
            string strMaxi = "";
            
            for(auto it : mp){
                if(it.second > maxi){
                    maxi = it.second;
                    strMaxi = it.first;
                }
            }
            
    
            return strMaxi; 
        }
    };©leetcode