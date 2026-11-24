/*

*/

class Solution {
public:
    int maxLength(vector<int>& nums) {
        int res = 0;
        int n = nums.size();
        const long long MAX_PROD = 25200;
        for(int i=0; i<n; i++){
            long long prod = nums[i];
            long long lcmVal = nums[i];
            long long gcdVal = nums[i];
            for(int j=i+1; j<n; j++){
                prod = prod * nums[j];
                if(prod > MAX_PROD){
                    break;
                }

                lcmVal = lcm(nums[j], lcmVal);
                gcdVal = gcd(nums[j], gcdVal);

                if(prod == gcdVal * lcmVal){
                    res = max(res, j-i+1);
                }
            }
        }

        return res;
    }
};