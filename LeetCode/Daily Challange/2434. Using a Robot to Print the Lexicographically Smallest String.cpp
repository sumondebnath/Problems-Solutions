/*

*/

class Solution {
public:
    string robotWithString(string s) {
        int n = s.length(); 
        if(n==0) return "";

        vector<char>str(n);
        
        str[n-1] = s[n-1];
        for(int i=n-2; i>=0; i--){
            str[i] = min(str[i+1], s[i]);
        }

        stack<char>st;
        string t;

        for(int i=0; i<n; i++){
            st.push(s[i]);
            while(!st.empty() && (i==n-1 || st.top() <= str[i+1])){
                t.push_back(st.top());
                st.pop();
            }
        }

        return t;
    }
};