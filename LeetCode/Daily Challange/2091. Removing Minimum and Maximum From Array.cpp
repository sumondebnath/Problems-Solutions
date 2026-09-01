/*

*/

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int mini = INT_MAX, maxi = INT_MIN;
        int low, high;
        // if(n<=2) return n;
        for(int i=0; i<n; i++){
            if(nums[i] < mini) {
                mini = nums[i];
                low = i;
            }
            if(nums[i] > maxi){
                maxi = nums[i];
                high = i;
            }
        }

        int l = min(low, high);
        int r = max(low, high);

        return min({r + 1, n - l, l + 1 + n - r});
    }
};