/*
    Problem Link : https://leetcode.com/problems/remove-outermost-parentheses/description/
*/

class Solution {
public:
    string removeOuterParentheses(string s) {
        string str;
        stack<char>st, st2;
        int count=0;
        bool flag=true;
        
        for(int i=0; i<s.length(); i++){
            if(s[i]=='(') count++;
            else if(s[i]==')') count--;
            if(count==0 and flag==false){
                flag = true;
                continue;
            }
            if(count==1 and flag==true){
                flag = false;
                continue;
            }
            str += s[i];
        }
        return str;
    }
};