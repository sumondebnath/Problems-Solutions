/*
    Problem Link : https://leetcode.com/problems/flood-fill/description/
*/

class Solution
{
public:
    bool vis[51][51];
    vector<pair<int, int>> arr = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};
    int r, c;

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

    void dfs(vector<vector<int>> &image, int si, int sj, int color, int c_clr)
    {
        vis[si][sj] = true;

        if (image[si][sj] == c_clr)
        {
            image[si][sj] = color;
        }

        for (int i = 0; i < 4; i++)
        {
            pair<int, int> p = arr[i];
            int pi = p.first + si;
            int pj = p.second + sj;

            if (isValid(pi, pj) && !vis[pi][pj] && image[pi][pj] == c_clr)
            {
                dfs(image, pi, pj, color, c_clr);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>> &image, int sr, int sc, int color)
    {
        r = image.size();
        c = image[0].size();
        dfs(image, sr, sc, color, image[sr][sc]);
        return image;
    }
};