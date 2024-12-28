/*
    https://www.geeksforgeeks.org/problems/rotate-by-90-degree-1587115621/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution
{
public:
    // Function to rotate matrix anticlockwise by 90 degrees.
    void rotateby90(vector<vector<int>> &mat)
    {
        int n = mat.size() - 2;
        int m = mat.size() - 1;

        for (int i = 0; i <= n; i++)
        {
            for (int j = i + 1; j <= m; j++)
            {
                swap(mat[i][j], mat[j][i]);
            }
        }

        reverse(mat.begin(), mat.end());
    }
};