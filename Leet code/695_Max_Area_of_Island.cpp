/*
    Problem Link : https://leetcode.com/problems/max-area-of-island/description/
*/

class Solution
{
public:
    int r, c;
    int count;
    bool vis[51][51];

    vector<pair<int, int>> path = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

    bool isValid(int i, int j)
    {
        if (i >= 0 && i < r && j >= 0 && j < c)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    void dfs(vector<vector<int>> grid, int si, int sj)
    {
        vis[si][sj] = true;

        count++;

        for (int i = 0; i < path.size(); i++)
        {
            pair<int, int> p = path[i];

            int ci = p.first + si;
            int cj = p.second + sj;

            if (isValid(ci, cj) && !vis[ci][cj] && grid[ci][cj] == 1)
            {
                dfs(grid, ci, cj);
            }
        }
    }

    int maxAreaOfIsland(vector<vector<int>> &grid)
    {
        r = grid.size();
        c = grid[0].size();
        int maxi = 0;

        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (!vis[i][j] && grid[i][j] == 1)
                {
                    count = 0;
                    dfs(grid, i, j);
                    maxi = max(maxi, count);
                }
            }
        }
        return maxi;
    }
};