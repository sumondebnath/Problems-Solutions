
/*
    Problem Link  :  https://leetcode.com/problems/valid-palindrome/description/
*/

class Solution
{
public:
    bool isPalindrome(string s)
    {
        string s1, s2;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] >= 65 && s[i] <= 90 || s[i] >= 97 && s[i] <= 122 || s[i] >= 48 && s[i] <= 57)
            {
                s1 += s[i];
                s2 += s[i];
            }
        }
        transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
        transform(s2.begin(), s2.end(), s2.begin(), ::tolower);
        cout << s1 << endl;
        ;
        reverse(s2.begin(), s2.end());
        cout << s2 << endl;

        return s1 == s2;
    }
};