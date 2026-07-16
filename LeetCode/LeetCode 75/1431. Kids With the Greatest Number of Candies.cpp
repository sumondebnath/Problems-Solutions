/*
    https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=study-plan-v2&envId=leetcode-75
*/

class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int mx = INT_MIN;
        for(int candy : candies){
            mx = max(candy, mx);
        }

        vector<bool>v;
        for(int candy : candies){
            if(candy+extraCandies >= mx) v.push_back(true);
            else v.push_back(false);
        }

        return v;
    }
};