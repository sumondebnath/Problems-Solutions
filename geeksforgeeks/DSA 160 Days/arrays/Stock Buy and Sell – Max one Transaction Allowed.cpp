/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/buy-stock-2
*/

class Solution {
    public:
      int maximumProfit(vector<int> &prices) {
          // code here
          int buy = prices[0], maxi = 0;
          
          for(int i=0; i<prices.size(); i++){
              if(prices[i] > buy){
                  maxi = max(maxi, prices[i]-buy);
              }
              else{
                  buy = prices[i];
              }
          }
          
          return maxi;
      }
  };