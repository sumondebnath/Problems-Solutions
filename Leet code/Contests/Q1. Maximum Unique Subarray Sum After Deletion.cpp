/*

*/

class Solution {
    public:
        int maxSum(vector<int>& nums) {
            unordered_set<int>st;
            for(int num : nums) {
                if(num > 0) st.insert(num);
            }
    
            if(st.empty()){
                sort(nums.begin(), nums.end());
                return nums.back();
            }
    
            int sum = 0;
            
            for(auto val : st){
                sum += val;
            }
            return sum;
        }
    };©leetcode