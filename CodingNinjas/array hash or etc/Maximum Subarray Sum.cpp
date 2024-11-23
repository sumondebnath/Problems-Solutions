/*
    https://www.naukri.com/code360/problems/maximum-subarray-sum_630526?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

long long maxSubarraySum(vector<int> arr, int n)
{
    long long sum = 0, maxi = 0;

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        maxi = max(maxi, sum);

        if (sum < 0)
            sum = 0;
    }

    return maxi;
}