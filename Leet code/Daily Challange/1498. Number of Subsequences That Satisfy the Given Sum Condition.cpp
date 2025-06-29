/*

*/

class Solution {
public:
    

    int numSubseq(vector<int>& nums, int target) {
        int n = nums.size();
        int result = 0;
        int right = n-1;
        const int mod = 1'000'000'007;
        // const int mod = 10e9+7;

        sort(nums.begin(), nums.end());

        vector<int>arr(n+1);
        arr[0] = 1;

        for(int i=1; i<=n; i++){
            arr[i] = (1LL * arr[i-1] * 2) % mod;
        }

        for(int i=0; i<n; i++){
            int left = nums[i];
            while(i<=right && nums[i] + nums[right] > target){
                right--;
            }

            if(i<=right){
                result = (result + arr[right-i]) % mod;
            }
        }

        return result;
    }
};