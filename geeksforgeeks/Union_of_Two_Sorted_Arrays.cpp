/*
    Problem Link : https://www.geeksforgeeks.org/problems/union-of-two-sorted-arrays-1587115621/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=union-of-two-sorted-arrays
*/

        // first Approch

class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // Your code here
        // return vector with correct order of elements
        set<int> st;
        vector<int> v;

        for (int i = 0; i < n; i++)
        {
            st.insert(arr1[i]);
        }
        for (int i = 0; i < m; i++)
        {
            st.insert(arr2[i]);
        }

        for (auto it : st)
        {
            v.push_back(it);
        }
        return v;
    }
};

        // Second Approch

class Solution
{
public:
    // arr1,arr2 : the arrays
    //  n, m: size of arrays
    // Function to return a list containing the union of the two arrays.
    vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        // Your code here
        vector<int> v;
        int i = 0, j = 0;
        while (i < n and j < m)
        {
            if (arr1[i] <= arr2[j])
            {
                if (v.size() == 0 or v.back() != arr1[i])
                {
                    v.push_back(arr1[i]);
                }
                i++;
            }
            else
            {
                if (v.size() == 0 or v.back() != arr2[j])
                {
                    v.push_back(arr2[j]);
                }
                j++;
            }
        }
        while (i < n)
        {
            if (v.back() != arr1[i])
            {
                v.push_back(arr1[i]);
            }
            i++;
        }
        while (j < m)
        {
            if (v.back() != arr2[j])
            {
                v.push_back(arr2[j]);
            }
            j++;
        }
        return v;
    }
};