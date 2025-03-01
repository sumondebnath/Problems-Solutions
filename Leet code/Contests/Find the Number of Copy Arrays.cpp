/*

*/

class Solution {
    public:
        int countArrays(vector<int>& original, vector<vector<int>>& bounds) {
            int n = original.size();
            int high = bounds[0][1];
            int low = bounds[0][0];
    
            for(int i=1; i<n; i++){
                int dif = original[i] - original[i-1];
                    // high += dif;
                    // low += dif;
        
                    // int u = bounds[i][0];
                    // int v = bounds[i][1];
        
                    low = max(low+dif, bounds[i][0]);
                    high = min(high+dif, bounds[i][1]);
        
                    if(low > high) return 0;
            }
    
            return high-low+1;
        }
    };©leetcode