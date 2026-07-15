/*
    https://leetcode.com/problems/lexicographically-minimum-string-after-removing-stars/description/?envType=daily-question&envId=2025-06-07
*/

class Solution {
public:
    string clearStars(string s) {
        vector<stack<int>>v(26);

        for(int i=0; i<s.size(); i++){
            if(s[i] != '*'){
                v[s[i]-'a'].push(i);
            }
            else{
                for(int j=0; j<26; j++){
                    if(!v[j].empty()){
                        s[v[j].top()] = '*';
                        v[j].pop();
                        break;
                    }
                }
            }
        }

        string str;

        for(int i=0; i<s.size(); i++){
            if(s[i] != '*') str.push_back(s[i]);
        }

        return str;
    }
};