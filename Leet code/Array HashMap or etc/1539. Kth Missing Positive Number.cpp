/*
    https://leetcode.com/problems/kth-missing-positive-number/description/
*/

class Solution {
    public:
        int findKthPositive(vector<int>& arr, int k) {
            int missingCount = 0;
            int currentNum = 1;
            int arrIndex = 0;
    
            while (missingCount < k) {
                if (arrIndex < arr.size() && arr[arrIndex] == currentNum) {
                    currentNum++;
                    arrIndex++;
                } else {
                    missingCount++;
                    if (missingCount == k) {
                        return currentNum;
                    }
                    currentNum++;
                }
            }
            return currentNum -1;
        }
};