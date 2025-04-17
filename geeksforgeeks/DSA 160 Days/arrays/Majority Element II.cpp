/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/majority-vote
*/

class Solution {
    public:
      // Function to find the majority elements in the array
      vector<int> findMajority(vector<int>& arr) {
          map<int, int>mp;
          
          for(int val : arr){
              mp[val]++;
          }
          
          vector<int>v;
          
          for(auto it : mp){
              if(it.second > arr.size()/3) v.push_back(it.first);
          }
          
          return v;
      }
  };