/*

*/

class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string>arr;

        for(int i=0; i<s.length(); i+=k){
            if(i+k <= s.length()){
                string str = s.substr(i, k);
                arr.push_back(str);
            }
            else{
                string str = s.substr(i);
                while(str.length() < k){
                    str += fill;
                }
                arr.push_back(str);
            }
        }

        return arr;
    }
};