/*
    Problem Link : https://www.naukri.com/code360/problems/element-that-appears-once_1092888?leftPanelTabValue=PROBLEM
*/

int elementThatAppearsOnce(vector<int> arr)
{
    int ones = 0;
    int twos = 0;

    for (int i = 0; i < arr.size(); i++)
    {
        ones = (ones ^ arr[i]) & ~twos;
        twos = (twos ^ arr[i]) & ~ones;
    }

    return ones;
}