/*
    https://www.naukri.com/code360/problems/transpose-of-a-matrix_2824817?leftPanelTabValue=PROBLEM
*/

#include <bits/stdc++.h>
vector<vector<int>> transpose(int m, int n, vector<vector<int>> &mat)
{
    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            v[i][j] = mat[j][i];
        }
    }

    return v;
}