/*
    Problem Link : https://www.naukri.com/code360/problems/longest-successive-elements_6811740?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

int longestSuccessiveElements(vector<int> &a)
{
    // Write your code here.
    sort(a.begin(), a.end());

    int count = 0;
    int longest = 0;
    int lastEle = INT_MIN;

    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] - 1 == lastEle)
        {
            count++;
            lastEle = a[i];
        }
        else if (lastEle != a[i])
        {
            count = 1;
            lastEle = a[i];
        }

        longest = max(longest, count);
    }

    return longest;
}