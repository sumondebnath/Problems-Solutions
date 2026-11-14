/*

*/

class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n = nums.size();
        int mini = INT_MAX;

        for (int i = 0; i < n; i++) {
            int current_sum = 0;

            for (int len = 1; len <= r; len++) {
                if (i + len - 1 < n) {
                    current_sum += nums[i + len - 1];

                    if (len >= l && current_sum > 0) {
                        mini = min(mini, current_sum);
                    }
                }
            }
        }

        return (mini == INT_MAX) ? -1 : mini;
    }
};