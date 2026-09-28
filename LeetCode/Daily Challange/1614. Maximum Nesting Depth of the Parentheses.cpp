/*

*/

class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int count = 0;

        for(char ch : s){
            if(ch == '(') st.push(ch);
            else if(ch == ')'&& st.top()=='('){
                st.pop();
            }
            count = max(count, (int)st.size());
        }
        return count;
    }
};