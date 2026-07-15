/*

*/

class Solution {
public:
    vector<int> recoverOrder(vector<int>& order, vector<int>& friends) {
        vector<int>ans;

        int n = order.size();
        int m = friends.size();

        for(int val : order){
            for(int person : friends){
                if(val == person){
                    ans.push_back(val);
                }
            }
        }

        return ans;
    }
};©leetcode