/*

*/

class Solution {
    public:
        int uniqueXorTriplets(vector<int>& nums) {
            int n = nums.size();
            if(n<3) return n;
    
            int count = 0;
            while((1<<count) < n+1){
                count++;
            }
    
            return 1 << count;
        }
    };