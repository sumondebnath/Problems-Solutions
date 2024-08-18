/*
    Problem Link : https://www.naukri.com/code360/problems/next-greater-permutation_6929564?utm_source=youtube&utm_medium=affiliate&utm_campaign=striver_Arrayproblems&leftPanelTabValue=PROBLEM
*/

vector<int> nextGreaterPermutation(vector<int> &A)
{
    // Write your code here.
    int idx = -1;
    int n = A.size();

    for (int i = n - 2; i >= 0; i--)
    {
        if (A[i] < A[i + 1])
        {
            idx = i;
            break;
        }
    }

    if (idx == -1)
    {
        reverse(A.begin(), A.end());
        return A;
    }

    for (int i = n - 1; i >= 0; i--)
    {
        if (A[i] > A[idx])
        {
            swap(A[i], A[idx]);
            break;
        }
    }

    reverse(A.begin() + idx + 1, A.end());

    return A;
}