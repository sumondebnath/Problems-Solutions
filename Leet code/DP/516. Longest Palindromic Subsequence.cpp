/*
    https://leetcode.com/problems/longest-palindromic-subsequence/description/
*/

class Solution {
    public:
        int lps(string& s, int low, int high, vector<vector<int>> &memo) {
    
        if(low > high) return 0;
        if (low == high)
            return 1;
    
        if(memo[low][high] != -1) 
            return memo[low][high];
    
        if (s[low] == s[high])
            return memo[low][high] = lps(s, low + 1, high - 1, memo) + 2;
    
        return memo[low][high] = max(lps(s, low, high - 1, memo),lps(s, low + 1, high, memo));
    }
        int longestPalindromeSubseq(string s) {
            vector<vector<int>>dp(s.length(), vector<int>(s.length(), -1));
    
            return lps(s, 0, s.length()-1, dp);
        }
    };