/*
    problem Link : https://www.geeksforgeeks.org/problems/quick-sort/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=quick-sort
*/

class Solution
{
public:
    // Function to sort an array using quick sort algorithm.
    void quickSort(int arr[], int low, int high)
    {
        // code here
        if (low < high)
        {
            int p_idx = partition(arr, low, high);
            quickSort(arr, low, p_idx - 1);
            quickSort(arr, p_idx + 1, high);
        }
    }

public:
    int partition(int arr[], int low, int high)
    {
        // Your code here
        int pivat = arr[low];
        int i = low;
        int j = high;

        while (i < j)
        {
            while (arr[i] <= pivat and i <= high - 1)
            {
                i++;
            }

            while (arr[j] > pivat and j >= low + 1)
            {
                j--;
            }
            if (i < j)
            {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);

        return j;
    }
};