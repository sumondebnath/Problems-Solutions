/*
    Problem Link : https://www.naukri.com/code360/problems/longest-subarray-with-sum-k_6682399?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    // Write your code here
    int left = 0;
    int right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();

    while (right < n)
    {
        while (left <= right and sum > k)
        {
            sum -= a[left];
            left++;
        }
        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }
    return maxLen;
}