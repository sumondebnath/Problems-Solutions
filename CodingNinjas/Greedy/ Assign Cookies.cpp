/*
    https://www.naukri.com/code360/problems/assign-cookies_8390826?leftPanelTabValue=PROBLEM
*/

int assignCookie(vector<int> &greed, vector<int> &size)
{
    sort(greed.begin(), greed.end());
    sort(size.begin(), size.end());

    int i = 0, j = 0;
    int count = 0;

    while (i < greed.size() && j < size.size())
    {
        if (greed[i] <= size[j])
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