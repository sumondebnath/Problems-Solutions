/*
    Problem Link : https://www.naukri.com/code360/problems/quick-sort_983625?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
using namespace std;

int pertition(vector<int> &arr, int left, int right)
{
    int pivat = arr[left];
    int i = left;
    int j = right;

    while (i < j)
    {
        while (arr[i] <= pivat and i <= right - 1)
        {
            i++;
        }

        while (arr[j] > pivat and j >= left + 1)
        {
            j--;
        }
        if (i < j)
        {
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[left], arr[j]);

    return j;
}

void Quick_Sort(vector<int> &arr, int left, int right)
{
    if (left < right)
    {
        int p_idx = pertition(arr, left, right);
        Quick_Sort(arr, left, p_idx - 1);
        Quick_Sort(arr, p_idx + 1, right);
    }
}

vector<int> quickSort(vector<int> arr)
{
    // Write your code here.

    Quick_Sort(arr, 0, arr.size() - 1);

    return arr;
}
