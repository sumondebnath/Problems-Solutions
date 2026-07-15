/*

*/

class Solution {
    public:
        bool canPartitionGrid(vector<vector<int>>& grid) {
            int m = grid.size();
            if (m == 0) return false;
            int n = grid[0].size();
            
            long long totalSum = 0;
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    totalSum += grid[i][j];
                }
            }
            
            if (totalSum % 2 != 0) {
                return false;
            }
            long long halfSum = totalSum / 2;
            
            long long rowSum = 0;
            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < n; ++j) {
                    rowSum += grid[i][j];
                }
                if (rowSum == halfSum) {
                    return true;
                }
                if (rowSum > halfSum) {
                    break;
                }
            }
            
            vector<long long> colSums(n, 0);
            for (int j = 0; j < n; ++j) {
                for (int i = 0; i < m; ++i) {
                    colSums[j] += grid[i][j];
                }
            }
            
            long long colSum = 0;
            for (int j = 0; j < n; ++j) {
                colSum += colSums[j];
                if (colSum == halfSum) {
                    return true;
                }
                if (colSum > halfSum) {
                    break;
                }
            }
            return false;
        }
    };©leetcode