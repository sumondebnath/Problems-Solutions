/*
    https://leetcode.com/problems/roman-to-integer/description/?envType=daily-question&envId=2025-02-16
*/

class Solution {
    public:
        int romanToInt(string s) {
            unordered_map<char, int> romanMap = {
                {'I', 1},
                {'V', 5},
                {'X', 10},
                {'L', 50},
                {'C', 100},
                {'D', 500},
                {'M', 1000}
            };
    
            int result = 0;
            int prevValue = 0;
    
            for (int i = s.length() - 1; i >= 0; i--) {
                int currentValue = romanMap[s[i]];
    
                if (currentValue < prevValue) {
                    result -= currentValue;
                } else {
                    result += currentValue;
                }
    
                prevValue = currentValue;
            }
    
            return result;
        }
    };


// Other approch
class Solution {
public:
    int convertToInt(char ch){
        if(ch == 'I') return 1;
        if(ch=='V') return 5;
        if(ch=='X') return 10;
        if(ch=='L') return 50;
        if(ch=='C') return 100;
        if(ch=='D') return 500;
        if(ch=='M') return 1000;
        return 0;
    }
    int romanToInt(string s) {
        int ans = 0;
        int n = s.length();
        int prev = convertToInt(s[n-1]);

        for(int i=n-1; i>=0; i--){
            if(prev > convertToInt(s[i])){
                ans -= convertToInt(s[i]);
            }
            else{
                ans += convertToInt(s[i]);
            }
            prev = convertToInt(s[i]);
        }

        return ans;
    }
};