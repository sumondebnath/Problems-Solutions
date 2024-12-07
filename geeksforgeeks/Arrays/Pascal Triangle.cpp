/*
    https://www.geeksforgeeks.org/problems/pascal-triangle0652/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution {
  public:
    vector<int> nthRowOfPascalTriangle(int n) {
        vector<vector<int>>v;
        
        for(int i=1; i<=n; i++){
            vector<int>arr;
            int ans = 1;
            arr.push_back(ans);
            for(int j=1; j<i; j++){
                ans *= i-j;
                ans /= j;
                arr.push_back(ans);
            }
            v.push_back(arr);
        }
        
        return v[n-1];
    }
};