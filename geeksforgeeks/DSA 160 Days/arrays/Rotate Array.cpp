/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/rotate-array-by-n-elements-1587115621
*/
class Solution {
    public:
  
      // Function to rotate an array by d elements in counter-clockwise direction.
      void rotateArr(vector<int>& arr, int d) {
          int n = arr.size();
          d %= arr.size();
          int k = n-d;
          
          reverse(arr.begin(), arr.begin()+d);
          reverse(arr.begin()+d, arr.end());
          reverse(arr.begin(), arr.end());
          
          return;
      }
  };