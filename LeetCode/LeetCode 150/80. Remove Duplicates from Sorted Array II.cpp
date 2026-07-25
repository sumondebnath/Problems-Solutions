/*
    https://leetcode.com/problems/remove-duplicates-from-sorted-array-ii/description/?envType=study-plan-v2&envId=top-interview-150
*/

// Brute force
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>mp;
        for(int num : nums){
            mp[num]++;
        }

        vector<int>v;

        for(auto it : mp){
            if(it.second >= 2){
                v.push_back(it.first);
                v.push_back(it.first);
            }
            else{
                v.push_back(it.first);
            }
        }

        for(int i=0; i<v.size(); i++){
            nums[i] = v[i];
        }

        return v.size();
    }
};



// Batter
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        map<int, int>mp;
        for(int num : nums){
            mp[num]++;
        }
        int i=0;

        for(auto it : mp){
            if(it.second >= 2){
                nums[i] = it.first;
                i++;
                nums[i] = it.first;
            }
            else{
                nums[i] = it.first;
            }
            i++;
        }

        return i;
    }
};

// Optimize
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int i =0;
        int k=2;

        for(i=2;i<nums.size();i++){
           if (nums[i]!=nums[k-2]){
                nums[k]=nums[i];
                k++;
           }
        }
        if(nums.size()<3)return nums.size();
        return k;
    }
};
