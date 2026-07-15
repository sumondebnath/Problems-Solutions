/*

*/

class Solution {
    public:
        bool hasSameDigits(string s) {
    
            while(s.length() > 2){
                string str = "";
                for (int i = 0; i < s.length() - 1; i++) {
                    int digit1 = s[i] - '0';
                    int digit2 = s[i + 1] - '0';
                    int sum = (digit1 + digit2) % 10;
                    str += to_string(sum);
                }
                s = str;
            }
    
            return s[0] == s[1];
        }
    };©leetcode