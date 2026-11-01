/*

*/

class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n = nums.size();
        int sum = 0, mini = INT_MAX;
        for(int num : nums){
            sum += num;
            mini = min(mini, num);
        }
        return sum - n * mini;
    }
};