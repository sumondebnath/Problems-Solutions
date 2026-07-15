/*
    https://leetcode.com/problems/first-unique-character-in-a-string/description/
*/

class Solution
{
public:
    int firstUniqChar(string s)
    {
        map<int, int> mp;

        for (int i = 0; i < s.length(); i++)
        {
            mp[s[i] - 'a']++;
        }
        for (int i = 0; i < s.length(); i++)
        {
            if (mp[s[i] - 'a'] == 1)
                return i;
        }
        return -1;
    }
};