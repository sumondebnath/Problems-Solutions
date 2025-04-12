/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/second-largest3735
*/

class Solution {
    public:
      int getSecondLargest(vector<int> &arr) {
          int n = arr.size();
          if(n<2) return -1;
          
          int first = INT_MIN;
          int sec = INT_MIN;
          
          for(int val : arr){
              if(val > first){
                  sec = first;
                  first = val;
              }
              else if (val > sec && val != first) sec = val;
          }
          
          if(sec == INT_MIN) return -1;
          return sec;
      }
  };