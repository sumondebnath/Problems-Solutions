/*
    Problem Link : https://www.geeksforgeeks.org/problems/rotation4723/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=rotation
*/

class Solution
{
public:
    int findKRotation(vector<int> &arr)
    {
        // Code Here
        int left = 0, right = arr.size() - 1;
        int index;
        int ans = INT_MAX;

        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (arr[left] <= arr[mid])
            {
                if (arr[left] < ans)
                {
                    index = left;
                    ans = arr[left];
                }
                left = mid + 1;
            }
            else
            {
                if (arr[mid] < ans)
                {
                    index = mid;
                    ans = arr[mid];
                }
                right = mid - 1;
            }
        }
        return index;
    }
};