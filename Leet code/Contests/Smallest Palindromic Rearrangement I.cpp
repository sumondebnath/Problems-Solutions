/*

*/

class Solution {
    public:
        string smallestPalindrome(string s) {
            vector<int> freq(26, 0);
            for (char c : s) {
                freq[c - 'a']++;
            }
        
            string half = "", mid = "";
        
            for (int i = 0; i < 26; ++i) {
                if (freq[i] % 2 == 1) {
                    mid = string(1, i + 'a');
                }
                half += string(freq[i] / 2, i + 'a');
            }
        
            string re_half = half;
            reverse(re_half.begin(), re_half.end());
        
            return half + mid + re_half;
        }
    };©leetcode