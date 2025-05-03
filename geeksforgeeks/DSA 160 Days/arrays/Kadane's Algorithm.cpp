/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/kadanes-algorithm-1587115620
*/

class Solution {
    public:
      int maxSubarraySum(vector<int> &arr) {
          // Your code here
          int maxi = arr[0];
          int result = arr[0];
          
          for(int i=1; i<arr.size(); i++){
              maxi = max(maxi+arr[i], arr[i]);
              
              result = max(result, maxi);
          }
          
          return result;
      }
  };