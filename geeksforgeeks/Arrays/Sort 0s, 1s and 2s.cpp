/*
    https://www.geeksforgeeks.org/problems/sort-an-array-of-0s-1s-and-2s4231/1
*/

class Solution
{
public:
    void sort012(vector<int> &arr)
    {
        int left = 0, mid = 0, right = arr.size() - 1;

        while (mid <= right)
        {
            if (arr[mid] == 0)
            {
                swap(arr[left], arr[mid]);
                left++;
                mid++;
            }
            else if (arr[mid] == 1)
            {
                mid++;
            }
            else
            {
                swap(arr[mid], arr[right]);
                right--;
            }
        }
    }
};