/*

*/

class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        int n = arr.size();
        int mini = INT_MAX;

        sort(arr.begin(), arr.end());
        vector<vector<int>>result;

        for(int i=0; i<n-1; i++){
            mini = min(mini, abs(arr[i]-arr[i+1]));
        }

        for(int i=0; i<n-1; i++){
            vector<int>v;
            if(abs(arr[i]-arr[i+1]) <= mini){
                v.push_back(arr[i]);
                v.push_back(arr[i+1]);
            }
            if(!v.empty()) result.push_back(v);
        }
        return result;    
    }
};