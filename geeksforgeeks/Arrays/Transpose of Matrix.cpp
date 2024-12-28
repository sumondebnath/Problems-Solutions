/*
    https://www.geeksforgeeks.org/problems/transpose-of-matrix-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution
{
public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>> &mat, int n)
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                // arr[j][(n-1)-i] = matrix[i][j];
                swap(mat[i][j], mat[j][i]);
            }
        }
    }
};