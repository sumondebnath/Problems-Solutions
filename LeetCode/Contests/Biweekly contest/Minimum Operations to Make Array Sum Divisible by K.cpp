/*

*/

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            int sum = 0;
            for(int num : nums) sum += num;
    
            int rem = sum % k;
            if(rem == 0) return 0;
    
            vector<int>v;
            for(int num : nums) v.push_back(num%k);
    
            sort(v.begin(), v.end(), greater<int>());
    
            int count = 0;
            for(int val : v){
                if(rem == 0) break;
                int temp = min(rem, val);
                count += temp;
                rem -= temp;
            }
    
            return count;
        }
    };