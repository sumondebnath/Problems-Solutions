/*
    https://www.naukri.com/code360/problems/longest-repeating-substring_980523?leftPanelTabValue=PROBLEM
*/

int longestRepeatingSubstring(string &str, int k)
{
    int n = str.length();
    int l = 0, r = 0;
    int maxf = 0;
    int maxlen = 0;
    map<int, int> mp;

    while (r < n)
    {
        mp[str[r]]++;
        maxf = max(maxf, mp[str[r]]);
        int changes = (r - l + 1) - maxf;
        if (changes > k)
        {
            mp[str[l]]--;
            l++;
        }
        maxlen = max(maxlen, r - l + 1);
        r++;
    }

    return maxlen;
}