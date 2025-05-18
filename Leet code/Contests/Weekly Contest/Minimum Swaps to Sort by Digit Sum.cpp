/*

*/
class Solution {
public:
    int SumOfDigits(int n){
        int sum = 0;
        while(n>0){
            sum += n%10;
            n /= 10;
        }
        return sum;
    }
    
    int minSwaps(vector<int>& nums) {
        vector<pair<int, int>> arr;
        for (int i = 0; i < nums.size(); i++) {
            int sum = SumOfDigits(nums[i]);
            arr.emplace_back(sum, nums[i]);
        }
        
        vector<int> sorted = nums;
        sort(sorted.begin(), sorted.end(), [&](int a, int b) {
            int sumA = SumOfDigits(a);
            int sumB = SumOfDigits(b);
            if (sumA != sumB) {
                return sumA < sumB;
            } else {
                return a < b;
            }
        });
        
        map<int, int> mp;
        for (int i = 0; i < nums.size(); ++i) {
            mp[nums[i]] = i;
        }
        
        int count = 0;
        for (int i = 0; i < nums.size(); ++i) {
            if (nums[i] != sorted[i]) {
                count++;
                int val = sorted[i];
                int curr = nums[i];
                
                int cor = mp[val];
                
                swap(nums[i], nums[cor]);
                
                mp[curr] = cor;
                mp[val] = i;
            }
        }
        return count;
    }
};©leetcode