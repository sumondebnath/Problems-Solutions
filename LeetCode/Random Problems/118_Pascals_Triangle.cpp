/*
    Link : https://leetcode.com/problems/pascals-triangle/description/
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;

        for(int i=1; i<=numRows; i++){
            vector<int> arr;
            int ans=1;
            arr.push_back(ans);
            for(int j=1; j<i; j++){
                ans = ans*(i-j);
                ans = ans/j;
                arr.push_back(ans);
            }
            v.push_back(arr);
        }

        return v;
    }
};