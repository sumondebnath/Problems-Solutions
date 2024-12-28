/*
    https://leetcode.com/problems/rotate-image/description/
*/

class Solution
{
public:
    void rotate(vector<vector<int>> &matrix)
    {
        int n = matrix.size() - 1;
        int m = matrix.size() - 1;

        for (int i = 0; i <= n - 1; i++)
        {
            for (int j = i + 1; j <= m; j++)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        for (int i = 0; i < matrix.size(); i++)
        {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }
};