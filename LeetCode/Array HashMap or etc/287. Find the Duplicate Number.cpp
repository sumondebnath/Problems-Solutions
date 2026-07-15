/*
    https://leetcode.com/problems/find-the-duplicate-number/description/
*/

class Solution
{
public:
    int findDuplicate(vector<int> &nums)
    {
        // map<int, int>mp;
        // for(int num : nums){
        //     mp[num]++;
        // }

        // for(auto it : mp){
        //     if(it.second >=2) return it.first;
        // }
        // return -1;

        int slow = nums[0];
        int fast = nums[0];

        do
        {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);

        fast = nums[0];

        while (slow != fast)
        {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};