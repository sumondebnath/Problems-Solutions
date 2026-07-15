/*

*/

class Solution {
public:
    vector<int> maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;

        for(int i=0; i<nums.size(); i++){
            pq.push({nums[i], i});
            if(pq.size() > k){
                pq.pop();
            }
        }

        vector<int>v, arr;

        while(!pq.empty()){
            v.push_back(pq.top().second);
            pq.pop();
        }

        sort(v.begin(), v.end());

        int j=0;
        for(int i=0; i<nums.size() && j<v.size(); i++){
            if(i == v[j]){
                arr.push_back(nums[i]);
                j++;
            }
        }

        
        return arr;
    }
};