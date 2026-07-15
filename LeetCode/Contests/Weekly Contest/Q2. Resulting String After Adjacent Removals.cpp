/*

*/

class Solution {
public:
    bool aToZ(char a, char b){
        if(a=='a' && b=='z') return true;
        if(a=='z' && b=='a') return true;

        return abs(a-b) == 1;
    }
    string resultingString(string s) {
        stack<char>st;

        for(char ch : s){
            if(!st.empty() && aToZ(st.top(), ch)) st.pop();
            else st.push(ch);
        }

        string str;

        while(!st.empty()){
            str += st.top();
            st.pop();
        }

        reverse(str.begin(), str.end());

        return str;
    }
};©leetcode