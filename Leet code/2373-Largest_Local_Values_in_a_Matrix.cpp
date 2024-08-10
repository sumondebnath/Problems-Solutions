/*
    problem Link : https://leetcode.com/problems/largest-local-values-in-a-matrix/description/
*/

class Solution
{
public:
    vector<vector<int>> largestLocal(vector<vector<int>> &grid)
    {

        int n = grid.size();

        vector<vector<int>> result(n - 2, vector<int>(n - 2));

        for (int i = 0; i < result.size(); i++)
        {
            for (int j = 0; j < result[i].size(); j++)
            {
                result[i][j] = 0;
            }
        }

        for (int i = 0; i < n - 2; i++)
        {
            for (int j = 0; j < n - 2; j++)
            {
                for (int r = i; r < i + 3; r++)
                {
                    for (int c = j; c < j + 3; c++)
                    {
                        result[i][j] = max(result[i][j], grid[r][c]);
                    }
                }
            }
        }

        return result;
    }
};