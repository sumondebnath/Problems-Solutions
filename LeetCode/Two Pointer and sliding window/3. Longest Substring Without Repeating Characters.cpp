/*
    Problem link : https://leetcode.com/problems/longest-substring-without-repeating-characters/description/
*/

class Solution
{
public:
    int lengthOfLongestSubstring(string s)
    {
        int l = 0, r = 0;
        int maxlen = 0;
        int mp[255];
        memset(mp, -1, sizeof(mp));

        while (r < s.length())
        {
            if (mp[s[r]] != -1 && mp[s[r]] >= l)
            {
                l = mp[s[r]] + 1;
            }
            int len = r - l + 1;
            maxlen = max(len, maxlen);
            mp[s[r]] = r;
            r++;
        }

        return maxlen;
    }
};