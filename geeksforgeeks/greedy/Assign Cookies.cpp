/*
    https://www.geeksforgeeks.org/problems/assign-cookies/0
*/

class Solution
{
public:
    int maxChildren(vector<int> &greed, vector<int> &cookie)
    {
        sort(greed.begin(), greed.end());
        sort(cookie.begin(), cookie.end());

        int i = 0, j = 0;
        int count = 0;

        while (i < greed.size() && j < cookie.size())
        {
            if (greed[i] <= cookie[j])
            {
                count++;
                i++;
                j++;
            }
            else
            {
                j++;
            }
        }
        return count;
    }
};