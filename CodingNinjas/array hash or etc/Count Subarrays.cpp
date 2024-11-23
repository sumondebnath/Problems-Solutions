/*
    https://www.naukri.com/code360/problems/count-subarrays-consisting-of-only-0-s-and-only-1-s-in-a-binary-array_1262154?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
int numberofSubarrays(vector<int> &arr, int n)
{
    int zero = 0, one = 0;
    int sum0 = 0, sum1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            zero++;
        }
        else
        {
            sum0 += zero * (zero + 1) / 2;
            zero = 0;
        }

        if (arr[i] == 1)
        {
            one++;
        }
        else
        {
            sum1 += one * (one + 1) / 2;
            one = 0;
        }
    }

    sum0 += zero * (zero + 1) / 2;
    sum1 += one * (one + 1) / 2;

    return sum0 + sum1;
}