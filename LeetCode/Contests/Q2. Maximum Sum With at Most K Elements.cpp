/*

*/

class Solution {
    public:
        long long maxSum(vector<vector<int>>& grid, vector<int>& limits, int k) {
            int n = grid.size();
            int m = grid[0].size();
    
            vector<int>v;
            
            for(int i=0; i<n; i++){
                if(limits[i] > 0){
                    vector<int> arr = grid[i];
                    sort(arr.begin(), arr.end());
        
                    for(int j=m-limits[i]; j<m; j++){
                        v.push_back(arr[j]);
                    }
                }
            }
    
            sort(v.begin(), v.end());
    
            long long sum = 0;
            int vSz = v.size();
            for(int i=vSz-k; i<vSz; i++){
                sum += v[i];
            }
    
            return sum;
        }
    };©leetcode