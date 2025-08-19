/*

*/

class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        long long count = 0;
        long long contiguous = 0;

        for(int num : nums){
            if(num == 0){
                count++;
            }
            else{
                contiguous += (count * (count+1)) / 2;
                count = 0;
            }
        }

        return contiguous + (count *(count+1))/2;
    }
};