/*

*/

class Solution {
public:
    vector<string> getLongestSubsequence(vector<string>& words, vector<int>& groups) {
        int n = words.size();
        vector<string>arr;

        arr.push_back(words[0]);

        for(int i=1; i<n; i++){
            if(groups[i] != groups[i-1]) arr.push_back(words[i]);
        }

        return arr;
    }
};