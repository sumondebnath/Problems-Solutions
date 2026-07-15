/*
    topic : Multisource BFS traversal.

    Problem Link : https://leetcode.com/problems/as-far-from-land-as-possible/description/
*/

class Solution
{
public:
    int maxDistance(vector<vector<int>> &grid)
    {
        int row = grid.size();
        int col = grid[0].size();

        queue<pair<int, int>> q;

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if (grid[i][j] == 1)
                {
                    q.push({i, j});
                }
            }
        }

        if (q.empty() || q.size() == row * col)
        {
            return -1;
        }

        vector<pair<int, int>> arr = {{0, -1}, {0, 1}, {-1, 0}, {1, 0}};

        int level = -1;

        while (!q.empty())
        {
            int sz = q.size();
            level++;
            while (sz--)
            {

                auto p = q.front();
                q.pop();
                int pi = p.first;
                int pj = p.second;

                for (auto dir : arr)
                {
                    int ci = dir.first + pi;
                    int cj = dir.second + pj;

                    if (ci < 0 || cj < 0 || ci >= row || cj >= col || grid[ci][cj] == 1)
                    {
                        continue;
                    }

                    grid[ci][cj] = 1;
                    q.push({ci, cj});
                }
            }
        }
        return level;
    }
};