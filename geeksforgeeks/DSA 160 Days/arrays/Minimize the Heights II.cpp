/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/minimize-the-heights3351
*/

class Solution {
    public:
      int getMinDiff(vector<int> &arr, int k) {
          // code here
          sort(arr.begin(), arr.end());
          int result = arr[arr.size()-1] - arr[0];
          
          for(int i=1; i<arr.size(); i++){
              if(arr[i]-k < 0) continue;
              
              int mini = min(arr[0]+k, arr[i]-k);
              int maxi = max(arr[i-1]+k, arr[arr.size()-1]-k);
              
              result = min(result, maxi-mini);
          }
          
          
          
          return result;
      }
  };