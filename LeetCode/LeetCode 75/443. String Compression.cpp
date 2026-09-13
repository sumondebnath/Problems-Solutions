/*

*/

class Solution {
public:
    int compress(vector<char>& chars) {
        int i=0, count=0;
        while(i<chars.size()){
            int len = 1;
            while(i+len < chars.size() && chars[i+len] == chars[i]){
                len++;
            }
            chars[count++] = chars[i];
            if(len>1){
                for(char ch:to_string(len)){
                    chars[count++] = ch;
                }
            }
            i+=len;
        }

        return count;
    }
};