/*
    https://www.geeksforgeeks.org/problems/kadanes-algorithm-1587115620/1?itm_source=geeksforgeeks&itm_medium=article&itm_campaign=practice_card
*/

class Solution {
  public:
    // Function to find the sum of contiguous subarray with maximum sum.
    int maxSubarraySum(vector<int> &arr) {
        int sum = 0;
        int maxsum = INT_MIN;
        int left=0;
        
        while(left < arr.size()){
            sum += arr[left];
            maxsum = max(sum, maxsum);
            if(sum < 0) sum = 0;
            left++;
        }
        
        return maxsum;
    }
};