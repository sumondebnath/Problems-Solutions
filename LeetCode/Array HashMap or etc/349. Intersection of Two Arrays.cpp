/*
    https://leetcode.com/problems/intersection-of-two-arrays/description/?envType=problem-list-v2&envId=sorting
*/

class Solution {
    public:
        vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            map<int, int>mp;
            for(int val : nums1){
                mp[val]++;
            }
    
            set<int>st;
    
            for(int num : nums2){
                if(mp.find(num) != mp.end()){
                    st.insert(num);
                }
            }
            vector<int>result(st.begin(), st.end());
    
            return result;
        }
    };