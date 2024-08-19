/*
    Problem Link : https://www.geeksforgeeks.org/problems/leaders-in-an-array-1587115620/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=leaders-in-an-array
*/

class Solution
{
    // Function to find the leaders in the array.
public:
    vector<int> leaders(int n, int arr[])
    {
        // Code here
        vector<int> v;
        int maxi = INT_MIN;

        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] >= maxi)
            {
                maxi = arr[i];
                v.push_back(maxi);
            }
        }

        reverse(v.begin(), v.end());

        return v;
    }
};