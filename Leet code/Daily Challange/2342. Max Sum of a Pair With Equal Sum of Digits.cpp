/*
    https://leetcode.com/problems/max-sum-of-a-pair-with-equal-sum-of-digits/description/
*/

class Solution {
    public:
        int Sum_of_digits(int n){
            int sum = 0;
            while(n!=0){
                sum += n%10;
                n /= 10;
            }
            return sum;
        }
        int maximumSum(vector<int>& nums) {
            vector<pair<int, int>> arr;
            int maxi = -1;
    
            for(int num : nums){
                int summ = Sum_of_digits(num);
                arr.push_back({summ, num});
            }
    
            sort(arr.begin(), arr.end());
    
            for(int i=1; i<arr.size(); i++){
                int a = arr[i].first;
                int b = arr[i-1].first;
    
                if(a == b){
                    maxi = max(maxi, (arr[i].second + arr[i-1].second));
                }
            }
    
            if(maxi <= 0) return -1;
            return maxi;
        }
    };