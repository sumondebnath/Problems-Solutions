/*
    Problem Link : https://www.naukri.com/code360/problems/maximum-points-from-cards_8391016?leftPanelTabValue=PROBLEM
*/

int maxPoints(vector<int> &arr, int K)
{
    int leftSum = 0, rightSum = 0;
    int idx = arr.size() - 1;

    for (int i = 0; i < K; i++)
    {
        leftSum += arr[i];
    }

    int maxSum = leftSum;

    for (int i = K - 1; i >= 0; i--)
    {
        leftSum -= arr[i];
        rightSum += arr[idx];
        idx--;

        maxSum = max(maxSum, (leftSum + rightSum));
    }

    return maxSum;
}