/*
    Problem Link : https://www.naukri.com/code360/problems/fruits-and-baskets_985356?leftPanelTabValue=PROBLEM
*/

int findMaxFruits(vector<int> &arr, int n)
{
    int maxlen = 0;

    for (int i = 0; i < n; i++)
    {
        set<int> st;
        for (int j = i; j < n; j++)
        {
            st.insert(arr[j]);
            if (st.size() <= 2)
            {
                maxlen = max(maxlen, j - i + 1);
            }
            else
            {
                break;
            }
        }
    }
    return maxlen;
}