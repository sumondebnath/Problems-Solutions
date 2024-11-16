/*
    Problem Link : https://www.naukri.com/code360/problems/maximum-consecutive-ones_892994?leftPanelTabValue=PROBLEM
*/

int longestSubSeg(vector<int> &arr, int n, int k)
{
    int maxlen = 0;
    for (int i = 0; i < n; i++)
    {
        int zero = 0;
        for (int j = i; j < n; j++)
        {
            if (arr[j] == 0)
                zero++;
            if (zero <= k)
            {
                maxlen = max(maxlen, j - i + 1);
            }
            else
                break;
        }
    }

    return maxlen;
}
