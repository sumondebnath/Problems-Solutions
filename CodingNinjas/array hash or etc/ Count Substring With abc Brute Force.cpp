/*
    Problem Link : https://www.naukri.com/code360/problems/count-substring-with-abc_8160465?leftPanelTabValue=PROBLEM
*/

int countSubstring(string s)
{

    int count = 0;

    for (int i = 0; i < s.size(); i++)
    {
        int hash[3] = {0};
        for (int j = i; j < s.size(); j++)
        {
            hash[s[j] - 'a'] = 1;
            if (hash[0] + hash[1] + hash[2] == 3)
            {
                // count++;
                count += (s.size() - j);
                break;
            }
        }
    }

    return count;
}