/*

*/

class Solution {
public:
    vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        vector<vector<int>> arr;

        for(int i=0; i<k; i++){
            vector<int>row;
            for(int j=0; j<k; j++){
                row.push_back(grid[x+i][y+j]);
            }
            arr.push_back(row);
        }

        reverse(arr.begin(), arr.end());

        for(int i=0; i<k; i++){
            for(int j=0; j<k; j++){
                grid[x+i][y+j] = arr[i][j];
            }
        }

        return grid;
    }
};©leetcode