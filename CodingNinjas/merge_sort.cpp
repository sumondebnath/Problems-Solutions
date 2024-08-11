/*
    Problem Link : https://www.naukri.com/code360/problems/merge-sort_920442?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&count=25&page=1&search=&sort_entity=order&sort_order=ASC&leftPanelTabValue=PROBLEM
*/

void merge(vector<int> &arr, int left, int mid, int right)
{
    vector<int> temp;

    int low = left;
    int high = mid + 1;

    while (low <= mid && high <= right)
    {
        if (arr[low] <= arr[high])
        {
            temp.push_back(arr[low]);
            low++;
        }
        else
        {
            temp.push_back(arr[high]);
            high++;
        }
    }

    while (low <= mid)
    {
        temp.push_back(arr[low]);
        low++;
    }
    while (high <= right)
    {
        temp.push_back(arr[high]);
        high++;
    }

    for (int i = left; i <= right; i++)
    {
        arr[i] = temp[i - left];
    }
}

void merge_sort_Recursive(vector<int> &arr, int left, int right)
{
    if (left == right)
    {
        return;
    }
    int mid = (left + right) / 2;
    merge_sort_Recursive(arr, left, mid);
    merge_sort_Recursive(arr, mid + 1, right);

    merge(arr, left, mid, right);
}

void mergeSort(vector<int> &arr, int n)
{
    // Write your code here.

    merge_sort_Recursive(arr, 0, n - 1);
}
