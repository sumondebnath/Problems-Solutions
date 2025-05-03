/*
    https://www.geeksforgeeks.org/batch/gfg-160-problems/track/arrays-gfg-160/problem/maximum-product-subarray3604
*/

class Solution {
    public:
      // Function to find maximum product subarray
      int maxProduct(vector<int> &arr) {
          // Your Code Here
          int maxi = arr[0];
          int mini = arr[0];
          int product = arr[0];
          
          for(int i=1; i<arr.size(); i++){
              int temp = max(arr[i], max(maxi*arr[i], mini*arr[i]));
              mini = min(arr[i], min(maxi*arr[i], mini*arr[i]));
              maxi = temp;
              product = max(maxi, product);
          }
          
          return product;
      }
  };