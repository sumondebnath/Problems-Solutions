/*
    Problem link : https://leetcode.com/problems/count-sub-islands/description/
*/

class Solution
{
public:
    void dfs(vector<vector<int>> &grid1, vector<vector<int>> &grid2, int i, int j, int &flag)
    {
        if (i >= 0 and j >= 0 and i < grid2.size() and j < grid2[0].size() and grid2[i][j] == 1)
        {
            grid2[i][j] = 2;
            if (grid1[i][j] == 0)
            {
                flag = 0;
            }
            dfs(grid1, grid2, i, j + 1, flag);
            dfs(grid1, grid2, i, j - 1, flag);
            dfs(grid1, grid2, i + 1, j, flag);
            dfs(grid1, grid2, i - 1, j, flag);
        }
    }

    int countSubIslands(vector<vector<int>> &grid1, vector<vector<int>> &grid2)
    {
        int row = grid2.size();
        int col = grid2[0].size();
        int result = 0;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid2[i][j] == 1 and grid1[i][j] == grid2[i][j])
                {
                    int flag = 1;
                    dfs(grid1, grid2, i, j, flag);
                    result += flag;
                }
            }
        }

        return result;
    }
};