/*
    https://leetcode.com/problems/minimum-operations-to-exceed-threshold-value-ii/description/?envType=daily-question&envId=2025-02-13
*/

class Solution {
    public:
        int minOperations(vector<int>& nums, int k) {
            priority_queue<long long, vector<long long>, greater<long long>>pq;
            for(int val : nums){
                pq.push((long long)val);
            }
            int minCounter = 0;
    
            while(!pq.empty() && pq.top() < k){
                long long x = pq.top();
                pq.pop();
                long long y = pq.top();
                pq.pop();
    
                long long calcu = min(x, y) * 2 + max(x, y);
                pq.push(calcu);
                minCounter++;
            }
    
            return minCounter;
        }
    };