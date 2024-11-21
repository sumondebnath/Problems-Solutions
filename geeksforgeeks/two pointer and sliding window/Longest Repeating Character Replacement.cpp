/*
    https://www.geeksforgeeks.org/problems/longest-repeating-character-replacement/1
*/

class Solution
{
public:
    int characterReplacement(string &s, int k)
    {
        int n = s.length();
        int l = 0, r = 0;
        int maxf = 0;
        int maxlen = 0;
        map<int, int> mp;

        while (r < n)
        {
            mp[s[r]]++;
            maxf = max(maxf, mp[s[r]]);
            int changes = (r - l + 1) - maxf;
            if (abs(changes) > k)
            {
                mp[s[l]]--;
                l++;
            }
            maxlen = max(maxlen, r - l + 1);
            r++;
        }

        return maxlen;
    }
};