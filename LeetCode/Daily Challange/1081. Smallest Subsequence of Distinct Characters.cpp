/*
    https://leetcode.com/problems/smallest-subsequence-of-distinct-characters/?envType=daily-question&envId=2026-07-19
*/

class Solution {
public:
    string smallestSubsequence(string s) {
        vector<int>freq(26, 0);
        for(char ch:s){
            freq[ch-'a']++;
        }

        stack<char>st;
        vector<bool>visit(26, false);

        for(char ch:s){
            if(visit[ch-'a']){
                freq[ch-'a']--;
                continue;
            }
            while(!st.empty() && st.top()>ch && freq[st.top()-'a']>0){
                visit[st.top()-'a'] = false;
                st.pop();
            }
            st.push(ch);
            visit[ch-'a'] = true;
            freq[ch-'a']--;
        }

        string str = "";
        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        reverse(str.begin(), str.end());

        return str;
    }
};