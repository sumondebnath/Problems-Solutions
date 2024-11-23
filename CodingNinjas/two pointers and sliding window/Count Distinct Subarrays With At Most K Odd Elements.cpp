/*
    https://www.naukri.com/code360/problems/count-distinct-subarrays-with-at-most-k-odd-elements_1069335?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

int CountOdd(vector<int> &nums, int k)
{
    if (k < 0)
        return 0;
    int n = nums.size();
    int l = 0, r = 0, sum = 0, count = 0;

    while (r < n)
    {
        sum += nums[r] % 2;
        while (sum > k)
        {
            sum -= nums[l] % 2;
            l++;
        }
        count += r - l + 1;
        r++;
    }
    return count;
}

int distinctSubKOdds(vector<int> &arr, int k)
{
    return CountOdd(arr, k) - CountOdd(arr, k - 1);
}