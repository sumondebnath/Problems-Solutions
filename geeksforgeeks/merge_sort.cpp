/*
    problem Link : https://www.geeksforgeeks.org/problems/merge-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=merge-sort
*/

class Solution
{
public:
    void merge(int arr[], int l, int m, int r)
    {
        // Your code here
        int l_size = (m - l) + 1;
        int r_size = r - m;

        int l_arr[l_size];
        int r_arr[r_size];

        int i_idx = 0;
        for (int i = l; i <= m; i++)
        {
            l_arr[i_idx] = arr[i];
            i_idx++;
        }
        i_idx = 0;
        for (int i = m + 1; i <= r; i++)
        {
            r_arr[i_idx] = arr[i];
            i_idx++;
        }

        int left = 0, right = 0;
        int cur = l;

        while (left < l_size and right < r_size)
        {
            if (l_arr[left] < r_arr[right])
            {
                arr[cur] = l_arr[left];
                left++;
            }
            else
            {
                arr[cur] = r_arr[right];
                right++;
            }
            cur++;
        }

        while (left < l_size)
        {
            arr[cur] = l_arr[left];
            left++;
            cur++;
        }
        while (right < r_size)
        {
            arr[cur] = r_arr[right];
            right++;
            cur++;
        }
    }

public:
    void mergeSort(int arr[], int l, int r)
    {
        // code here
        if (l < r)
        {
            int m = (l + r) / 2;
            mergeSort(arr, l, m);
            mergeSort(arr, m + 1, r);

            merge(arr, l, m, r);
        }
    }
};