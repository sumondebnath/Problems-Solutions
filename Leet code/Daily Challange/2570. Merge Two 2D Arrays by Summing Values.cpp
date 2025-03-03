/*
    https://leetcode.com/problems/merge-two-2d-arrays-by-summing-values/description/?envType=daily-question&envId=2025-03-02
*/

class Solution {
    public:
        vector<vector<int>> mergeArrays(vector<vector<int>>& nums1, vector<vector<int>>& nums2) {
            vector<vector<int>> ans;
    
            int n = nums1.size()-1;
            int m = nums2.size()-1;
    
            int i=0, j=0;
            while(i<=n && j<=m){
                if(nums1[i][0] == nums2[j][0]){
                    ans.push_back({nums1[i][0], nums1[i][1]+nums2[j][1]});
                    i++;
                    j++;
                }
                else if(nums1[i][0] < nums2[j][0]){
                    ans.push_back(nums1[i]);
                    i++;
                }
                else{
                    ans.push_back(nums2[j]);
                    j++;
                }
            }
    
            while(i<=n){
                ans.push_back(nums1[i]);
                i++;
            }
            while(j<=m){
                ans.push_back(nums2[j]);
                j++;
            }
    
            return ans;
        }
    };