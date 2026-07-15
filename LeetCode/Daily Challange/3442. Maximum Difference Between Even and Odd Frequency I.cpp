/*

*/

class Solution {
public:
    int maxDifference(string s) {
        map<char, int>mp;
        for(char ch : s){
            mp[ch]++;
        }

        int minEven=s.length(), maxOdd=0;

        for(auto it : mp){
            if(it.second %2 == 0){
                minEven = min(minEven, it.second);
            }
            else{
                maxOdd = max(maxOdd, it.second);
            }
        }

        return maxOdd-minEven;
    }
};